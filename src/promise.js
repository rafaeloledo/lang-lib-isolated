const firstElement = arrayOrString => arrayOrString[0]
const lowerCaseLetter = letter => letter.toLowerCase()

new Promise(resolve => {
  resolve(['Ana', 'Bia', 'Carlos', 'Daniel'])
})
.then(firstElement)
.then(firstElement)
.then(lowerCaseLetter)
.then(console.log)