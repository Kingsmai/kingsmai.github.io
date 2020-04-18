// 现点击页面，显示单击的坐标
document.addEventListener("click", function(event) {
    console.log(`offset: ${event.offsetX}, ${event.offsetY}`);
    console.log(`page: ${event.pageX}, ${event.pageY}`);
    console.log(`client: ${event.clientX}, ${event.clientY}`);
}, false);