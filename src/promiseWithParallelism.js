function generateNumbersBetween(min, max, time) {
  if (min >= max) { throw new Error("Min number >= Max") }
  return new Promise(resolve => {
    setTimeout(() => {
      const factor = max - min + 1
      const random = parseInt(Math.random() * factor) + min
      resolve(random)
    }, time)
  })
}

function generateManyNumbers () {
  return Promise.all([
    generateNumbersBetween(1, 60, 4000),
    generateNumbersBetween(1, 60, 500),
    generateNumbersBetween(1, 60, 1500),
    generateNumbersBetween(1, 60, 800),
    generateNumbersBetween(1, 60, 700),
    generateNumbersBetween(1, 60, 550),
    generateNumbersBetween(1, 60, 380),
    generateNumbersBetween(1, 60, 3500)
  ])
}

console.time("Promise")

generateManyNumbers()
  .then(console.log)
  .then(() => {
    console.timeEnd("Promise")
  })