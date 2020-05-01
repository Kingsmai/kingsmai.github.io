// 编写程序，原型如下图，
// 点击“-”按钮，可以实现输入框的值--（输入框的值>=1，当输入框的值为1的时候不允许用户再次点击，且按钮opacity：0.6；cursor：defalut;当值>1得时候显示正常）
// 点击“+”按钮，输入框的值自动+1
// 用户也可以直接修改输入框的值(当输入的值小于1的时候自动改成1，比如输入的12as自动改为12显示)
// 价格通过客户端直接获取
// 总价 = 数量 * 价格（总价要求实时更新，即数量改变的之后，总价也要跟着改变）。提示输入框监听事件oninput;强制转换parseInt()

var price = parseFloat(prompt(`请输入单价`, '10')).toFixed(2);
window.onload = function() {
    document.getElementById("price").innerHTML = price;
}
var count = 1;
function modSub(element = document.getElementById()) {
    if (count <= 1) {
        return;
    }
    count--;
    if (count == 1) {
        element.classList.add("disabled");
    }
    document.getElementById("inputCount").value = count;
    Calculate();
}

function modAdd() {
    if (document.getElementsByClassName("modBtn")[0].classList.contains("disabled")){
        document.getElementsByClassName("modBtn")[0].classList.remove("disabled");
    }
    count++ ;
    document.getElementById("inputCount").value = count;
    Calculate();
}

function InputMod(element = document.getElementById) {
    if (element.value < 1) {
        element.value = 1;
    }
    element.value = parseInt(element.value);
    Calculate();
}

function Calculate() {
    total = document.getElementById("inputCount").value * price;
    document.getElementById("total").innerHTML = total.toFixed(2);
}