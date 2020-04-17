// 使用map函数，将用户输入的数组中的每一位数字都增加30%,数组元素也由用户输入，数组元素保留2位小数，并输出。
// map() 方法返回一个新数组，数组中的元素为原始数组元素调用函数处理后的值。
// map() 方法按照原始数组元素顺序依次处理元素。
// array.map(function(currentValue,index,arr), thisValue)
var n = Number(prompt(`请输入数组个数`));
var arr = new Array();
var i = 0;
while (i < n) {
    arr.push(Number(prompt(`请输入数值`)));
    i++;
}
// 将每一位数字都增加30%
function Add30Percent(num) {
    // 数组元素保留2位小数
    return Number(num + (num * 0.3)).toFixed(2);
}
document.body.insertAdjacentHTML("beforeend", `Base array: ${arr} <br>`);
document.body.insertAdjacentHTML("beforeend", `Output: ${arr.map(Add30Percent)}`);