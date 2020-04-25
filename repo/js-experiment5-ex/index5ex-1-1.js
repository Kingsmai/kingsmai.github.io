// 随机生成6位数的验证码，包含数字或大小写字母，并将验证码显示在文本框中。
var code = new Array();
var textBox = document.getElementById("verifyCode");

function RndChar() {
    var str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    return str[Math.floor(Math.random() * str.length)];
}
for (let i = 0; i < 6; i++) {
    code[i] = RndChar();
}
textBox.value = code.join("");