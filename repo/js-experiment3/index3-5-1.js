// 点击后按钮文字改变，字体颜色改变，再次点击变回来。
var clicked = false; // 判断按钮状态
btn.onclick = function () {
    if (!clicked) {
        btn.value = "请点击我还原";
        btn.style.color = "red";
    } else {
        btn.value = "请点击我变形";
        btn.style.color = "black";
    }
    clicked = !clicked;
}