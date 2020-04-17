// 写一个函数，生成一个长度为 n 的随机字符串（n的值为用户输入），
// 字符串字符的取值范围包括0到9，a到z，A到Z
function GetRndInt(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}

function GetRndStr(len) {
    var str = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRXTUVWXYZ1234567890';
    var rndStr = new Array();
    for (i = 0; i < len; i++) {
        rndStr.push(str[GetRndInt(0, str.length)]);
    }
    return rndStr.join('');
}

document.body.insertAdjacentHTML("beforeend", (GetRndStr(prompt('Please input random string\'s length'))));