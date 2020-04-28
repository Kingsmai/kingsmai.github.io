var width = 0;
var newWidth = 0;

function btnClick() {
    if (width >= 100) {
        return;
    }
    newWidth += 10;
    var progressBar = document.getElementById("progressBar");
    var timer = setInterval(animate, 100);

    function animate() {
        if (width >= newWidth) {
            clearInterval(timer);
        } else {
            width++;
            progressBar.style.width = width + '%';
            progressBar.innerHTML = width + '%';
        }
    }
}