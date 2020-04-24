// 编写一个函数，使用递归的方法，计算一个正整数的阶乘并输出。
function Fact(num) {
    if (num == 0 || num == 1) {
        return num;
    } else {
        return num * Fact(num - 1);
    }
}
var num = parseInt(prompt(`Please insert value`));
console.log(`${num}! = ${Fact(num)}`);