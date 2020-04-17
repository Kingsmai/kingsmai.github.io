// 写一个函数，生成一个长度为 n 的随机字符串（n的值为用户输入），
// 字符串字符的取值范围包括0到9，a到z，A到Z
console.log(Math.random().toString(36).replace(/[^a-z]+/g, '').substr(0, 5));
console.log(Math.random().toString(36).substring(2, 15) + Math.random().toString(36).substring(2, 15));
console.log(Math.random().toString(36).replace(/[^a-z]+/g, ''));

// 返回给定范围内的随机数
function getRandomArbitrary(min, max) {
    return Math.random() * (max - min) + min;
}

// 返回给定范围内的随机整数
function getRandomInt(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}



//生成一个随机 IP 地址
function getRandIP() {
    var str = [];
    for (i = 0; i < 4; i++) {
        str.push(getRandomInt(0, 255));
    }
    return str.join('.');
}

//生成一个随机颜色字符串，合法的颜色为#000000~ #ffffff
function getRandColor() {
    var str = "0123456789abcdef";
    var str1 = ["#"];
    for (i = 0; i < 6; i++) {
        str1.push(str[getRandomInt(0, 15)]);
    }
    return str1.join("");
}

//生成一个长度为 n 的随机字符串（字符串字符的取值范围包括0到9，a到 z，A到Z）
function getRandStr(len) {
    var str = '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
    var str1 = [];
    for (i = 0; i < len; i++) {
        str1.push(str[getRandomInt(0, 61)]);
    }
    return str1.join('');
}