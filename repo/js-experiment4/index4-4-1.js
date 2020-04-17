// 有一个从小到大排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。例如：
// 原数组  [3,10,49,89,100] 插入一个数 15 新数组为   [3,10,15,49,89,100]。（提示：splice）
var arr = [3, 10, 49, 89, 100];
var newArr = new Array();
while (true) {
    var input = Number(prompt("请输入要插入的数值"));
    if (!isNaN(input)) {
        break;
    } else {
        alert("Input must be Number!");
    }
}
for (let i in arr){
    newArr.push(arr[i]);
}
newArr.push(input);
newArr.sort(SortNumber);
function SortNumber(a, b) {
    return a - b;
}

document.write(`Base Array: ${arr} <br>`);
document.write(`Input Value: ${input} <br>`);
document.write(`newArr: ${newArr}`);