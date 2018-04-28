import axios from "axios";

const credential = btoa("hoge");

axios
  .post("https://api.twitter.com/oauth2/token", {
    headers: {
      Authentication: `Basic ${credential}`,
      "Content-Type": "application/x-www-form-urlencoded;charset=UTF-8"
    },
    data: {
      grant_type: "client_credentials"
    }
  })
  .then(response => {
    console.log(response);
  });
