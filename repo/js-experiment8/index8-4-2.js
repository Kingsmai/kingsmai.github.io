// 请编写一个函数，求一个字符串的字节长度。（一个英文字符占用一个字节，一个中文字符占用两个字节。）
function CountBytes(str = "") {
    var bytes = 0;
    for (let i in str) {
        // 字符串的charCodeAt()方法获取指定索引对应的ASCII码值，
        // 汉字的ASCII大于255,其它的字母数字以及其他字符ASCII编码值在0-255之间
        if (str.charCodeAt(i) > 255) {
            bytes += 2;
        } else if (str[i] == " ") {
            continue
        } else {
            bytes += 1;
        }
    }
    return bytes;
}
console.log(CountBytes(prompt(`Please insert strings`)));