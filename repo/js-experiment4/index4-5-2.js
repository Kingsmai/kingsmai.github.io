var inputData = Number(prompt(`请输入要加密的数字`));

Encrypt(inputData);

function Encrypt(data) {
    document.write(`Base Data: ${data} <br>`);
    var a = parseInt(data / 1000);
    var b = parseInt((data - a * 1000) / 100);
    var c = parseInt((data - a * 1000 - b * 100) / 10);
    var d = parseInt(data % 10);
    a = ((a + 5) % 10).toString();
    b = ((b + 5) % 10).toString();
    c = ((c + 5) % 10).toString();
    d = ((d + 5) % 10).toString();
    var encrypted = d + c + b + a;
    document.write('Encrypted Data: ' + encrypted);
}