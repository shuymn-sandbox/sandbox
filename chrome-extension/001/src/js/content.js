function callbackA(arg) {
  console.log('forEach');
}

function callbackB(arg) {
  console.log('map and reduce');
}

/** @param {MutationRecord} record */
const mapping = async (record, _callback) => Array.from(record.addedNodes)
  .map(async node => node)
  .reduce((chain, nodePromise) => chain
    .then(() => nodePromise)
    .then(response => _callback(response)), Promise.resolve());

const observer = new MutationObserver(records => records
  .map(record => mapping(record, callbackB))
  .reduce((chain, recordPromise) => chain
    .then(() => recordPromise), Promise.resolve()));

observer.observe(document, { childList: true, subtree: true });

(new MutationObserver(records => records.forEach(record => record.addedNodes.forEach(node => callbackA(node))))).observe(document, { childList: true, subtree: true });
