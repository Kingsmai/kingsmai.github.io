// 查找数组对象中 age 大于 18 对象。
// （相应数据信息为：age: 19,name: 'Jack',age: 5,name: 'Apple',age: 12,name: 'Lynn',age: 25,name: 'David'）
/**
 * @description Create a new person data
 * @param {Number} age 
 * @param {String} name 
 */
function People(age, name) {
    this.age = age;
    this.name = name;
};

var person = [
    new People(
        19,
        'Jack'
    ),
    new People(
        5,
        'Apple'
    ),
    new People(
        12,
        'Lynn'
    ),
    new People(
        25,
        'David'
    )
];
for (let i in person){
    if (person[i].age > 18){
        document.body.innerHTML += `Age: ${person[i].age}, Name: ${person[i].name} <br>`
    };
}