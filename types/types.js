"use strict";
// # string
let personName = 'João';
console.log(personName);
// personName = 28
// # numbers
let age = 27;
// age = 'Ana'
age = 27.5;
console.log(age);
// # boolean
let haveHobbies = false;
// haveHobbies = 1
console.log(haveHobbies);
// # explicit types
let myAge;
myAge = 27;
console.log(typeof myAge);
// myAge = '27'
// # array
let hobbies = ["Cozinhar", "Praticar Esportes"];
console.log(hobbies[0]);
console.log(typeof hobbies);
hobbies = [100, 200, 300];
// hobbies = 100
console.log(hobbies);
// # tuplas
let adress = ["Av Principal", 99, ""];
console.log(adress);
adress = ["Rua Importante", 1260, "Bloco C"];
console.log(adress);
// # enums
var Color;
(function (Color) {
    Color[Color["Cinza"] = 0] = "Cinza";
    Color[Color["Verde"] = 1] = "Verde";
    Color[Color["Azul"] = 2] = "Azul"; // 2
})(Color || (Color = {}));
let myColor = Color.Verde;
console.log(myColor);
// # any
let car = 'BMW';
console.log(car);
car = { marca: 'BMW', ano: 2019 };
console.log(car);
// # functions
function returnMyName() {
    // return myAge
    return personName;
}
console.log(returnMyName());
function sayHello() {
    console.log('Hello');
    // return myAge
}
sayHello();
function multiply(numA, numB) {
    return numA * numB;
}
// console.log(multiply(2, 'Bia'))
console.log(multiply(2, 2));
// # function type
let calculate;
// calculate = sayHello
// calculate()
// calculate = {}
calculate = multiply;
console.log(calculate(5, 6));
// # objects
let user = {
    name: 'João',
    age: 27
};
console.log(user);
// user = {}
// user = {
//   nome: 'Maria',
//   idade: 31
// }
user = {
    name: 'Maria',
    age: 31
};
console.log(user);
// # Object types challenge
let employee = {
    supervisors: [
        'Antonio',
        'Roberta'
    ],
    toClockIn: (hour) => {
        return hour <= 8 ? 'Ponto normal' : 'Fora do horário';
    }
};
console.log(employee.supervisors);
console.log(employee.toClockIn(8));
console.log(employee.toClockIn(9));
// employee = {}
// # Union types
let score = 10;
console.log(`Minha nota é ${score}`);
// ## Checking Types
let value = 30;
if (typeof value === "number") {
    console.log("É um number!");
}
else {
    console.log(typeof value);
}
function fail(msg) {
    throw new Error(msg);
}
const product = {
    name: 'Sabão',
    price: 8,
    validateProduct() {
        if (!this.name || this.name.trim().length == 0) {
            fail('Precisa ter um nome');
        }
        if (this.price <= 0) {
            fail('Preço inválido');
        }
    }
};
product.validateProduct();
// # Optional values with null
let height = 12;
// height = null
let optionalHeight = 12;
optionalHeight = null;
const contact1 = {
    name: 'Fulano',
    tel1: '9575743671',
    tel2: null
};
console.log(contact1.name);
console.log(contact1.tel1);
console.log(contact1.tel2);
let canBeNull = null; // any
// canBeNull = 12
console.log(canBeNull);
// canBeNull = 'abc'
console.log(canBeNull);
let bankAccount = {
    balance: 3456,
    deposit(amount) {
        this.balance += amount;
    }
};
let accountHolder = {
    name: 'Ana Silva',
    bankAccount: bankAccount,
    phones: ['34567890', '98765432']
};
accountHolder.bankAccount.deposit(3000);
console.log(accountHolder);
//# sourceMappingURL=types.js.map