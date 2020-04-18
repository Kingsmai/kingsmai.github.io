// 根据下拉框的选项来显示对应的图片。如下图所示：（用select里面的 onchange事件）
function SwitchImage(dropDown) {
    document.querySelector("#container").style.backgroundImage = `URL('./img/${dropDown.value}.png')`;
}