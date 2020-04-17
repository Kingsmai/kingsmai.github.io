// 累加按钮，自加1。点击按钮后，数字自动加1
var btn = document.createElement('input');
btn.setAttribute('id', 'myBtn');    // btn.id = "myBtn";
btn.type = "button"
document.body.appendChild(btn); // 创建按钮
var myBtn = document.getElementById('myBtn');
myBtn.value = 0;
myBtn.addEventListener('click', Add, false);

var currentVal = 0;
function Add(){
    myBtn.value = ++currentVal;
}