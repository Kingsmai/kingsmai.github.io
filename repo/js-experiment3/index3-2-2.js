var fly = [
    ["GuoHang001", "武汉", "北京"],
    ["LanHang001", "南京", "上海"],
    ["ShiHang003", "武汉", "上海"],
    ["HaiHang008", "南京", "北京"]
];
var where = prompt("请输入你需要查询的是出发地还是目的地");
if (where == "出发地") {
    var startsp = prompt("请输入你要出发的地点:");
    if (startsp == "武汉") {
        document.write("航班号:" + fly[0][0] + " " + "出发地:" + fly[0][1] + " " + "目的地:" + fly[0][2]);
        document.write("<br />");
        document.write("航班号:" + fly[2][0] + " " + "出发地:" + fly[2][1] + " " + "目的地:" + fly[2][2]);
    } else if (startsp == "南京") {
        document.write("航班号:" + fly[1][0] + " " + "出发地" + fly[1][1] + " " + "目的地:" + fly[1][2]);
        document.write("<br />");
        document.write("航班号:" + fly[3][0] + " " + "出发地:" + fly[3][1] + " " + "目的地:" + fly[3][2]);
    }
} else if (where == "目的地") {
    var tosp = prompt("请输入你要到达的地点:");
    if (tosp == "北京") {
        document.write("航班号:" + fly[0][0] + " " + "出发地:" + fly[0][1] + " " + "目的地:" + fly[0][2]);
        document.write("<br />");
        document.write("航班号:" + fly[3][0] + " " + "出发地:" + fly[3][1] + " " + "目的地:" + fly[3][2]);
    } else if (tosp == "上海") {
        document.write("航班号:" + fly[1][0] + " " + "出发地:" + fly[1][1] + " " + "目的地:" + fly[1][2]);
        document.write("<br />");
        document.write("航班号:" + fly[2][0] + " " + "出发地:" + fly[2][1] + " " + "目的地:" + fly[2][2]);
    }
}