// 创建个人爱好复选框，（音乐、登山、游泳、阅读、打球、跑步），点击全选则全部选中，全部选则全部取消。
function SelectAll(btn){
    var checkbox = document.getElementsByName("hobby");
    for (let i = 0; i < checkbox.length; i++){
        if (!checkbox[i].checked && btn == "check"){
            checkbox[i].click();
        } else if (checkbox[i].checked && btn == "uncheck") {
            checkbox[i].click();
        }
    }
}