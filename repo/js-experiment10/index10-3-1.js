var progressBar = document.getElementById("progress");
var progress = 0;
var newProgress = 0;
var timer = null;

function Animate() {
    progress += 0.05;
    if (progress >= newProgress) {
        progress = newProgress;
        clearInterval(timer);
    }
    progressBar.style.width = `${progress}%`
    progressBar.innerHTML = `${progress.toFixed(2)}%`;
}

function AddProg() {
    if (newProgress >= 100) {
        return;
    }
    newProgress += 10;
    timer = setInterval(() => Animate(), 1);
}