// 现点击页面，显示单击的坐标
document.addEventListener("mousedown", function(event) {
    // 考虑兼容
    var event = event || window.event
    console.log(`offset: ${event.offsetX}, ${event.offsetY}`);
    console.log(`page: ${event.pageX}, ${event.pageY}`);
    console.log(`client: ${event.clientX}, ${event.clientY}`);
    console.log(`screen: ${event.screenX}, ${event.screenY}`);
}, false);