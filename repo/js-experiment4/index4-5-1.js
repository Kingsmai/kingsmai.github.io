// 某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下：
// 每位数字都加上5,然后用除以10的余数代替该数字，
// 再将第一位和第四位交换，第二位和第三位交换，
// 请编写一个函数，传入原文，输出密文。
var inputData = "";
while (true) {
    inputData = Number(prompt(`Please input code you want to encrypt`));
    if (!isNaN(inputData) && inputData <= 9999) {
        break;
    } else {
        alert(`Data must be Number and below 4 digits`)
    }
}
Encrypt(inputData);

/**
 * @method Encrypt
 * @description Output encrypted data
 * @param {Number} data 
 */
function Encrypt(data) {
    // add Zero
    if (data < 1) {
        data = "0000";
    } else if (data < 10) {
        data = "000" + data;
    } else if (data < 100) {
        data + "00" + data;
    } else if (data < 1000) {
        data = "0" + data;
    } else {
        data = data;
    }
    document.write(`Base Data: ${data} <br>`)
    // Get each dight
    var a = parseInt(data / 1 % 10);
    var b = parseInt(data / 10 % 10);
    var c = parseInt(data / 100 % 10);
    var d = parseInt(data / 1000 % 10);
    // Each digit + 5, Each dight % 10
    a = ((a + 5) % 10).toString();
    b = ((b + 5) % 10).toString();
    c = ((c + 5) % 10).toString();
    d = ((d + 5) % 10).toString();
    var encrypted = d + c + b + a;
    // replace first and forth, second and third
    document.write(`Encrypted Data: ${encrypted}`);
}