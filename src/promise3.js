function generateNumbersBetween(min, max) {
  if (min >= max) {
    throw new Error("Min number >= Max")
  }

  return new Promise(resolve => {
    const factor = max - min + 1
    const random = parseInt(Math.random() * factor) + min
    resolve(random)
  })
}

generateNumbersBetween(1, 60)
.then(console.log)