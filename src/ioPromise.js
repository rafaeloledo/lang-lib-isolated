const fs = require("fs")
const _path = require("path")

function readFile(path) {
  return new Promise (resolve => {
    fs.readFile(path, (err, content) => {
      resolve(content.toString())
    })
    // console.log("Asynchronous line")
  })
}

const path = _path.join(__dirname, "../files/data.txt")

readFile(path)
  .then(content => content.split('\n'))
  .then(lines => console.log(lines[0])) // prints the first line