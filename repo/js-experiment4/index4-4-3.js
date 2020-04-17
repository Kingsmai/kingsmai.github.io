var arr = [3, 10, 49, 89, 100];
var newArr = new Array();
var input = Number(prompt("请输入要插入的数值"));
for (let i in arr){
    newArr.push(arr[i]);
}
for (let i in newArr) {
    if (newArr[i] > input) {
        newArr.splice(i, 0, input);
        break;
    }
}
document.write("输出: " + newArr);