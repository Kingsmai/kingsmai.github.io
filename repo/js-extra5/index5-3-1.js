// 传入任意字符串，统计字符串中的大写字母个数、小写字母个数、数字个数、其他字符个数。
var str = prompt(`请输入任意字符串（包括大小写字母，数字，特殊符号）`)
var upperCase = /[A-Z]/;
var lowerCase = /[a-z]/;
var digit = /\d/;
var symbol = /[_+-.,!@#$%^&*();\\/|<>"']/;
var upperCaseCount = 0;
var lowerCaseCount = 0;
var digitCount = 0;
var symbolCount = 0;
for (let i in str) {
    if (upperCase.test(str[i])) {
        upperCaseCount++;
        continue;
    }
    if (lowerCase.test(str[i])) {
        lowerCaseCount++;
        continue;
    }
    if (digit.test(str[i])) {
        digitCount++;
        continue;
    }
    if (symbol.test(str[i])) {
        symbolCount++;
        continue;
    }
}
console.log(`字符串：${str}, 长度：${str.length}`);
console.log(`大写字符：${upperCaseCount}个`);
console.log(`小写字符：${lowerCaseCount}个`);
console.log(`数字：${digitCount}个`);
console.log(`符号：${symbolCount}个`);