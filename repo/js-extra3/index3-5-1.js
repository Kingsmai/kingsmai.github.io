// 实现在标题栏上动态显示当前时间的效果。
var title = document.getElementsByTagName('title');

var mainLoop = setInterval(function () {
    title[0].innerHTML = GetCurrentTime();
}, 1000);

function GetCurrentTime() {
    var date = new Date();
    var hour = date.getHours();
    var minute = date.getMinutes() < 10 ? '0' + date.getMinutes() : date.getMinutes();
    var second = date.getSeconds() < 10 ? '0' + date.getSeconds() : date.getSeconds();
    return `${hour}:${minute}:${second}`;
}