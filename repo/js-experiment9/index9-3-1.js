// 封装一个函数PrimeNumber， 判断键盘输入的某个正整数是否为素数
function PrimeNumber(num) {
    for (let i = 2; i < num; i++) {
        if (i % num == 0) {
            return false;
        }
    }
    return true;
}
var num = parseInt(prompt(`Please input a value`));
console.log(`${num} PrimeNumber: ${PrimeNumber(num)}`);