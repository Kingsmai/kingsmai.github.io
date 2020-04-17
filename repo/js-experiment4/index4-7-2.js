var btn = document.getElementById('myBtn');
myBtn.innerHTML = 0;
var currentVal = 0;
myBtn.onclick = Add;

function Add(){
    myBtn.innerHTML = ++currentVal;
}