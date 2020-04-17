// 编写一个函数f(x)=4x^2+3x+2,使用户通过提示对话框输入x的值，能得到相应的计算结果
var a = prompt(`Please input X`);

function Calculate(x) {
    return 4 * Math.pow(x, 2) + 3 * x + 2
}
console.log(`x = ${a}: ${Calculate(a)}`);