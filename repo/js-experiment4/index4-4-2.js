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
// 因为 newArr = arr, 输出的时候 arr 会跟着改变
// 数组的赋值是索引，arr和newArr其实是指向同一个内存地址的，所以会同时改变
for (let i in arr){
    newArr.push(arr[i]);
}
for (let i in newArr) {
    if (newArr[i] > input) {
        newArr.splice(i, 0, input);
        break;
    } else if (i == (newArr.length - 1)){
        // 当输入的值大于整个数组时
        newArr.push(input);
        break;
    }
}
document.write(`Base Array: ${arr} <br>`);
document.write(`Input Value: ${input} <br>`);
document.write(`newArr: ${newArr}`);