/**
 * 创建一个长度不小于三的数组arr,并显示，数组元素分别执行 ChangeT函数，返回值重新组成一个数组newArr显示,ChangeT()实现参数 num 与返回值的关系如下：
 * （1）如果 num 能同时被 3 和 4 整除，返回字符串 BlueGreen
 * （2）如果 num 能被 3 整除，返回字符串 Blue
 * （3）如果 num 能被 4 整除，返回字符串 Green
 * （4）如果参数为空或者不是 Number 类型，返回 false
 * （5）其余情况，返回参数 num
 */

var arr = [12, 9, 14, 'a', 16];
var newArr = new Array();

function ChangeT(num) {
    // 如果 num 能同时被 3 和 4 整除，返回字符串 BlueGreen
    if (num % 3 == 0 && num % 4 == 0) {
        newArr.push('BlueGreen');
        // 如果 num 能被 3 整除，返回字符串 Blue
    } else if (num % 3 == 0) {
        newArr.push('Blue');
        // 如果 num 能被 4 整除，返回字符串 Green
    } else if (num % 4 == 0) {
        newArr.push('Green');
        // 如果参数为空或者不是 Number 类型，返回 false
    } else if (isNaN(num)) {
        newArr.push('false');
        // 其余情况，返回参数 num
    } else {
        newArr.push('num');
    }
}
for (let i in arr) {
    ChangeT(arr[i]);
}
document.body.innerHTML += `原数组：${arr}<br>转换后的数组：${newArr}`;