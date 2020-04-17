// 现有一表格，分别输入数字后创建表格。
function CreateTable(r, c) {
    var tableNode = document.createElement("table");
    tableNode.border = 1;
    tableNode.width = "400px";
    if (r <= 0 || isNaN(r)) {
        alert("输入的行号错误，不能创建表格，请重新输入：");
        return;
    }
    if (c <= 0 || isNaN(c)) {
        alert("输入的列号错误，不能创建表格，请重新输入：");
        return;
    }
    for (var x = 0; x < r; x++) {
        var trNode = tableNode.insertRow();
        for (var y = 0; y < c; y++) {
            var tdNode = trNode.insertCell();
            tdNode.innerHTML = `${x}${y}`;
        }
    }
    document.body.appendChild(tableNode);
}