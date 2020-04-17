// 在网页上写一个60秒的倒计时程序
var time = 60; // 倒计时
timer = setInterval(function () {
    if (time <= 0) {
        document.all.timer.innerHTML = "Times UP!";
        clearInterval(timer); // 移除时钟函数
        time = 60;
    } else {
        document.all.timer.innerHTML = time + "秒倒计时"; // 输出剩余时间
    }
    time--;
}, 1000); // 每秒调用一次