// 自己设计实现一个轮播图
var prev = document.getElementById("prev");
var next = document.getElementById("next");
var list = document.getElementById("list");
var buttons = document.getElementById("buttons").getElementsByTagName("span");
var container = document.getElementById("container");
var index = 1;
var timer;
var animated = false;

prev.addEventListener("click", function () {
    if (!animated) {
        if (index == 1) {
            index = 5;
        } else {
            index -= 1;
        }
        ShowButton();
        Animate(600);
    }
}, false);
next.addEventListener("click", function () {
    if (!animated) {
        if (index == 5) {
            index = 1;
        } else {
            index += 1;
        }
        ShowButton();
        Animate(-600);
    }
}, false);

function Animate(offset) {
    var time = 300;
    var interval = 10;
    var speed = offset / (time / interval);
    animated = true;
    var newLeft = parseInt(list.style.left) + offset;

    function Go() {
        if ((speed > 0 && parseInt(list.style.left) < newLeft) || (speed < 0 && parseInt(list.style.left) > newLeft)) {
            list.style.left = parseInt(list.style.left) + speed + "px";
            setTimeout(() => {
                Go();
            }, interval);
        } else {
            animated = false;
            if (newLeft > -600) {
                list.style.left = -3000 + "px";
            }
            if (newLeft < -3000) {
                list.style.left = -600 + "px";
            }
        }
    }
    Go();
}

function ShowButton() {
    for (var i = 0; i < buttons.length; i++) {
        if (buttons[i].className == 'on') {
            buttons[i].className = '';
            break;
        }
    }
    buttons[index - 1].className = "on";
}

for (i = 0; i < buttons.length; i++) {
    buttons[i].addEventListener("click", function () {
        if (this.className == "on") {
            return;
        }
        var myIndex = parseInt(this.getAttribute("index"));
        var offset = -600 * (myIndex - index);
        if (!animated) {
            Animate(offset);
        }
        index = myIndex;
        ShowButton();
    }, false);
}

function play() {
    timer = setInterval(() => {
        if (!animated) {
            if (index == 5) {
                index = 1;
            } else {
                index += 1;
            }
            ShowButton();
            Animate(-600);
        }
    }, 2000);
}

function stop() {
    clearInterval(timer);
}
play();

container.addEventListener("mouseenter", stop, false);
container.addEventListener("mouseleave", play, false);