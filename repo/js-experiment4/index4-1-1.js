// 现有一个数组 arr = [4, 0, 7, 9, 0, 0, 2, 6, 0, 3, 1, 0];
// 要求将数组中中重复的项去掉，生成新的数组。
// 并用document.write输出到页面。（提示：使用push方法）
var arr = [4, 0, 7, 9, 0, 0, 2, 6, 0, 3, 1, 0];
var unique = new Array(); // 新数组
// 先循环 unique 函数，判断每一个 arr 数组元素，然后赋值到 unique 中
for (let i in arr) {
    if (!CheckIsRepeat(arr[i])) {
        unique.push(arr[i]);
    }
}
document.write(`Base Array: ${arr} <br>`);
document.write(`Unique Array: ${unique}`);

/**
 * @method CheckIsRepeat
 * @description return false if the number is in the unique array
 * @param {Number} num 
 */
function CheckIsRepeat(num) {
    for (let i in unique) {
        if (unique[i] == num) {
            return true;
        }
    }
    return false;
}