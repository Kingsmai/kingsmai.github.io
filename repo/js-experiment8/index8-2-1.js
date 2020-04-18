// 将数组[{age: 19,name: 'Jack'},{age: 5, name: 'Apple'},{age: 12,name: 'Lynn'},{age: 25,name: 'David'}]元素按 age 字段的值，从小到大排序。
function sortAge(arr) {
    return arr.sort(function (v1, v2) {
        if (v1.age < v2.age) {
            return -1;
        } else {
            return 1;
        }
    });
}
console.log(sortAge([
    {age: 19, name: 'Jack'},
    {age: 5, name: 'Apple'},
    {age: 12, name: 'Lynn'},
    {age: 25, name: 'David'}
]));