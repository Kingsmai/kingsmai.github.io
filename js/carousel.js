window.onload = function () {
    // 显示图片的div
    var container = document.getElementById("container");
    // 按钮
    var prevButton = document.getElementById("prev");
    var nextButton = document.getElementById("next");
    var buttons = document.getElementById("buttons").getElementsByTagName("span");
    // 获取图片列表
    var list = document.getElementById("list");
    // 获取轮播图片数量
    var imgCount = list.children.length - 2; // 减去头尾重复
    var listWidth = imgCount * parseInt(list.style.left);
    var index = 1; // 默认显示第一张图片
    var timer = null; // 轮播图时钟
    var animated = false; // 判断图片是否正在移动

    prevButton.onclick = function () {
        if (!animated) { // 先判断能否点击
            if (index == 1) {
                // 跳到最后一张图片
                index = imgCount;
            } else {
                index--;
            }
            SwitchButton();
            Swipe(600);
        }
    }
    nextButton.onclick = function () {
        if (!animated) {
            if (index == imgCount) {
                // 跳到第一张图片
                index = 1;
            } else {
                index++;
            }
            SwitchButton();
            Swipe(-600);
        }
    }

    // 初始化按钮
    for (i = 0; i < buttons.length; i++) {
        buttons[i].addEventListener("click", function () {
            if (this.className == "on") {
                return;
            }
            var myIndex = parseInt(this.getAttribute("index"));
            var offset = -600 * (myIndex - index);
            if (!animated) {
                Swipe(offset);
            }
            index = myIndex;
            SwitchButton();
        }, false);
    }

    // 图片切换动画
    function Swipe(offset) {
        var time = 300;
        var interval = 10; // 重复间隔
        var speed = offset / (time / interval); // 滚动速度
        var newLeft = parseInt(list.style.left) + offset; // 计算下一张图片显示的位置
        animated = true;

        function Go() {
            if ((speed > 0 && parseInt(list.style.left) < newLeft) || (speed < 0 && parseInt(list.style.left) > newLeft)) {
                list.style.left = parseInt(list.style.left) + speed + 'px'; // 更改css样式
                setTimeout(Go, interval); // 递归延时形成动画效果
            } else { // 滚动完毕
                animated = false;
                if (newLeft > listWidth / imgCount) {
                    list.style.left = listWidth + "px";
                }
                if (newLeft < listWidth) {
                    list.style.left = listWidth / imgCount + "px";
                }
            }
        }
        Go();
    }

    // 切换按钮状态
    function SwitchButton() {
        for (var i = 0; i < buttons.length; i++) {
            if (buttons[i].className == 'on') {
                buttons[i].className = '';
                break;
            }
        }
        buttons[index - 1].className = "on";
    }

    // 时钟控制
    function Play() {
        timer = setInterval(nextButton.onclick, 2000);
    }

    function Stop() {
        clearInterval(timer); // 停止时钟
    }
    Play();

    // 鼠标进入，暂停滚动
    container.addEventListener("mouseenter", Stop, false);
    container.addEventListener("mouseleave", Play, false);
    // 图片滑动
}