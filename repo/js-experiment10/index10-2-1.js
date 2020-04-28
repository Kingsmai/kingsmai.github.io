var list = document.getElementsByTagName("tr");
for (let i = 1; i < list.length; i++) {
    list[i].addEventListener("mouseover", function () {
        this.style.backgroundColor = "#eee";
    }, false)
    list[i].addEventListener("mouseleave", function () {
        this.style.backgroundColor = "";
    }, false)
}