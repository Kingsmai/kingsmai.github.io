// 定义一个函数, 判断数组中是否所有的数字都大于0。提示: 传入一个数组, 返回布尔值
// 传入数组arr
var test = [45, 42, 9, 38, 4, 89, 41];
function LargerThanZero(arr) {
    for (let i in arr) {
        if (arr[i] < 0) {
            return false;   // Got 1 data smaller than 0
        };
    }
    return true;    // All data are larger then 0
}
document.body.innerHTML += `Array: ${test} <br>`;
document.body.innerHTML += `LargerThanZero(test): ${LargerThanZero(test)}`;