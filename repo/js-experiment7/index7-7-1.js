// 现有一个列表，如下图所示，用js实现以下功能：鼠标点击某一项列表时，改变该项的文字。
var list = document.querySelector("#list");
for (i = 0; i < list.children.length; i++){
    list.children[i].onclick = function(){
        this.innerHTML = "被点击后的" + this.innerHTML;
    }
}