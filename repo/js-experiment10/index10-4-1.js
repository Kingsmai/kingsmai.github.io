// 做一个弹窗广告。让广告弹窗缓慢从底部弹出，点击“X”后，改广告消失。
var ads = document.getElementById("ads");
var closeAds = document.getElementById("close");
var newBtm = -288;
var timer = null;
console.log(ads)
console.log(closeAds);

function ShowAds() {
    newBtm += 1;
    if (newBtm <= 0) {
        ads.style.bottom = `${newBtm}px`;
    } else {
        clearInterval(timer);
    }
}

function HideAds() {
    newBtm -= 1;
    if (newBtm <= -288) {
        clearInterval(timer);
    }
    ads.style.bottom = `${newBtm}px`;
}

setTimeout(() => {
    timer = setInterval(() => ShowAds(), 1);
}, 2000);

closeAds.onclick = function () {
    timer = setInterval(() => HideAds(), 1);
}