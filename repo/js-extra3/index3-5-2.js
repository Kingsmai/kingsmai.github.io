// 实现在标题栏上动态显示当前时间的效果。
function ShowTime() {
    time = new Date();
    document.title = time.toLocaleString();
    setTimeout(ShowTime, 1000);
}
ShowTime();