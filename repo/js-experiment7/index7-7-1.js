// 现有一个列表，如下图所示，用js实现以下功能：鼠标点击某一项列表时，改变该项的文字。
// 通过 querySelector 获取HTML上的 id #list
var list = document.querySelector("#list");
// 遍历绑定每一个 list 的子元素（列表项）
for (i = 0; i < list.children.length; i++) {
    // list.children[i] 是 #list 列表的 i 项
    list.children[i].onclick = function () {
        var str = this.innerHTML;
        // 判断是否被点击过了
        if (str.indexOf("被点击后的") == -1) {
            // 点击的时候 this 指向的是列表项
            // 改变列表项的 innerHTML 为切换后的字符串
            this.innerHTML = "被点击后的" + this.innerHTML;
        }
    }
}