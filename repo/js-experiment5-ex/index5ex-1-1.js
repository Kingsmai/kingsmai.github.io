// 随机生成6位数的验证码，包含数字或大小写字母，并将验证码显示在文本框中。
var code = new Array();
var textBox = document.getElementById("verifyCode");
var userInput = document.getElementById("userInput");
var result = document.getElementById("result");

function RndChar() {
    var str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    return str[Math.floor(Math.random() * str.length)];
}

function GenCode(){
    for (let i = 0; i < 6; i++) {
        code[i] = RndChar();
    }
    textBox.value = code.join("");
}

function Verify(){
    var userIn = userInput.value.toUpperCase();
    var test = textBox.value.toUpperCase()
    if (userIn == test) {
        result.innerHTML = `验证正确`;
    } else {
        result.innerHTML = `验证码错误`;
    }
}