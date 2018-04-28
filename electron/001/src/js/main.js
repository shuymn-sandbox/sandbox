import path from "path";
import url from "url";
import { app, BrowserWindow } from "electron";

let win;

function createWindow() {
  // create window
  win = new BrowserWindow({ width: 800, height: 600 });

  // load the index.html
  win.loadURL(
    url.format({
      pathname: path.join(__dirname, "../static/index.html"),
      protocol: "file:",
      slashes: true
    })
  );

  // open the devtools
  win.webContents.openDevTools();

  win.on("closed", () => {
    win = null;
  });
}

app.on("ready", createWindow);

app.on("window-all-closed", () => {
  if (process.platform !== "darwin") {
    app.quit();
  }
});

app.on("activate", () => {
  if (win === null) {
    createWindow();
  }
});
