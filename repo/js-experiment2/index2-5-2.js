// 在网页上写一个60秒的倒计时程序
window.onload = function(){	// 当页面加载后
    var displayTime = document.getElementById('timer');	// 获取显示时间的元素
    var time = 60; // 倒计时
    var timer = setInterval(function(){
        if (time <= 0){
            displayTime.innerHTML = "Times Up!";
            clearInterval(timer);	// 移除时钟函数
            time = 60;
        }else{
            displayTime.innerHTML = time + "秒倒计时";
        }
        time--;
    }, 1000);
}