const os = require('os')

const anonymous = process.argv.indexOf('-a') !== -1

if (anonymous) {
  process.stdout.write("Hello, anonymous.\n")
  process.exit()
} else {
  process.stdout.write("Informe o seu nome: ")
  process.stdin.on("data", data => {
    const name = data.toString().replace(os.EOL, '')
    process.stdout.write(`Hello, ${name}`)
    process.exit()
  })
}