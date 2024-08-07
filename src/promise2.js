function waitFor(time = 2000) {
  return new Promise((resolve) => {
    setTimeout(() => {
      console.log("Executando promise...")
      resolve("Vishhh")
    }, time)
  })
}

waitFor(3000).then(console.log)