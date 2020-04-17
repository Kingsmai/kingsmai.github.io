// 移除数组 arr[3,4,2,6,7,3,8,9,2,3,7,2,6,2] 中的所有的数字2。
// 不要直接修改数组 arr，结果返回新的数组。
var arr = [3, 4, 2, 6, 7, 3, 8, 9, 2, 3, 7, 2, 6, 2];
var newArr = new Array();
for (let i in arr) {
    if (arr[i] != 2) {
        newArr.push(arr[i]);
    }
}
document.write(`Base Array: ${arr} <br>`);
document.write(`New Array (without 2): ${newArr}`);