// 定义5个按钮，功能分别是边长变长（扩大2倍）、变高（扩大2倍）、还原。
// 分别点击后实现其功能，分别是使div标签进行相应设置
var rect;
window.onload = function () {
    rect = document.getElementById('objectRect');
}

function WidthAdj() {
    rect.style.width = "200px";
}

function WidthRst() {
    rect.style.width = "100px";
}

function HeightAdj() {
    rect.style.height = "200px";
}

function HeightRst() {
    rect.style.height = "100px";
}

function Restore() {
    rect.style.width = "100px";
    rect.style.height = "100px";
}