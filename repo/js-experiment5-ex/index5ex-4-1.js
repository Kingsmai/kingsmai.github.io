// 创建文本域，在文本域下方使用div显示已输入的字符个数。
// 如果输入的字符个数大于20个，则输入的所有字符及表示字符个数的数字变为红色，否则为蓝色。
// （提示：调用文本域的onkeyup事件）
var textBox = document.getElementById("textBox");
var charDisp = document.getElementById("charDisp");
textBox.onkeyup = function() {
    if (textBox.value.length > 20) {
        textBox.style.color = "red";
    } else {
        textBox.style.color = "blue";
    }
    charDisp.innerHTML = `${textBox.value.length} 个字符。`
}