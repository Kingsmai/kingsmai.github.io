// 定义5个按钮，功能分别是边长变长（扩大2倍）、变高（扩大2倍）、还原。
// 分别点击后实现其功能，分别是使div标签进行相应设置
WidthAdj.onclick = function () {
    rect.style.width = "200px";
}
WidthRst.onclick = function () {
    rect.style.width = "100px";
}
HeightAdj.onclick = function () {
    rect.style.height = "200px";
}
HeightRst.onclick = function () {
    rect.style.height = "100px";
}
Restore.onclick = function () {
    rect.style.width = "100px";
    rect.style.height = "100px";
}