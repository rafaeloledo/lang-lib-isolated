// # let & const
// console.log(canI)
// var canI = '?' // hoisting
// let canI = '?' // hoisting

let isCold = true
if (isCold) {
  // let action = 'Put the jacket!'
  // var action = 'Put the jacket!'
}
// console.log(action)

const cpf: string = '123.456.000-99'
// cpf = '978.123.445-55'
console.log(cpf)

var secret = 'externo'
function reveal() {
  var secret = 'interno'
  console.log(secret)
}
reveal()
console.log(secret)

// # Arrow function
const add = function (n1: number, n2: number): number {
  return n1 + n2
}
console.log(add(2, 2))

const subtract = (n1: number, n2: number): number => n1 - n2
console.log(subtract(3, 2))

const saudacao = () => console.log("Olá!")
saudacao()

const falarCom = (pessoa: string) => console.log('Ola' + pessoa)
falarCom('João')

// # this
function normalWithThis() {
  // console.log(this)
}

const normalWithThisSpecial = normalWithThis.bind(2)
 
// normalWithThis()
normalWithThisSpecial()

// const arrowWithThis = () => console.log(this)

console.log(this)
// arrowWithThis()

// const arrowWithThisSpecial = arrowWithThis.bind(2)
// arrowWithThisSpecial()
