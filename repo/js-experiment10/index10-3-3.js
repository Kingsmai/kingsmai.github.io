var width = 0;
function dian() {
    if (width >= 100) {
        return;
    }
    width += 10;
    var nei = document.getElementById("nei");
    nei.style.width = width + '%';
    nei.innerHTML = width + '%';
}