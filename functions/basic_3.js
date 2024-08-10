// arrow function

const felizNatal = () => console.log('Feliz natal!!')
felizNatal()

const saudacao = nome => `Fala ${nome}!!`
console.log(saudacao('Rafael'))

const somar = (...numeros) => {
  let total = 0
  for (let n of numeros) {
    total += n
  }
  return total
}

console.log(somar(1, 2, 3, 4))

// function potencia(base) {
//   return function (exp) {
//     return Math.pow(base, exp)
//   }
// }

const potencia = base => exp => Math.pow(base, exp)

console.log(potencia(2)(8))