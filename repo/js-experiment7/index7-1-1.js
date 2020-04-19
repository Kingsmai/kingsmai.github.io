// 一个大数组中包含了4个小数组，分别找到每个小数组中的最大值，然后把它们串联起来，形成一个新数组。
var arr = [
    [1234, 5678, 99, 88],
    [1566, 54, 548, 740],
    [46, 418, 986, 83],
    [4, 8, 9, 6]
];

function CombineLargest(attr = []) {
    var newArr = new Array();
    for (let i in attr) {
        newArr.push(attr[i].sort(function (a, b) {
            return b - a;
        })[0]);
    }
    return newArr;
}
console.log(CombineLargest(arr));
document.body.insertAdjacentHTML("beforeend", `insertAdjacentHTML: ${CombineLargest(arr)} <br>`);
document.body.innerHTML += `innerHTML: ${CombineLargest(arr)} <br>`;
document.write(`document.write: ${CombineLargest(arr)} <br>`);