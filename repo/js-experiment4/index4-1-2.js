// 现有一个数组 arr = [4, 0, 7, 9, 0, 0, 2, 6, 0, 3, 1, 0];
// 求将数组中的0项去掉，将不为0的值存入一个新的数组，生成新的数组。
// 并用document.write输出到页面。（提示：使用push方法）
var arr = [4, 0, 7, 9, 0, 0, 2, 6, 0, 3, 1, 0];
var withoutZero = new Array();
for (let i in arr) {
    if (arr[i] != 0) {
        withoutZero.push(arr[i]);
    }
}
document.write(`Base Array: ${arr} <br>`);
document.write(`withoutZero: ${withoutZero}`);