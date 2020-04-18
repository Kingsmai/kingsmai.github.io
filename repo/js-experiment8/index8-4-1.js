// 请编写一个函数，求一个字符串的字节长度。（一个英文字符占用一个字节，一个中文字符占用两个字节。）
function CountBytes(str = "") {
    var bytes = 0;
    for (let i in str) {
        if (str[i] == " ") {
            continue;
        } else if (/[\u4e00-\u9fa5]/.test(str[i])) { // \u4e00-\u9fa5 正则表达式判断汉字
            bytes += 2;
        } else {
            bytes += 1;
        }
    }
    return bytes;
}
console.log(CountBytes(prompt(`Please insert strings`)));