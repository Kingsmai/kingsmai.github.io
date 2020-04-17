/** 
 * 现有4架航班的基本信息（航班号，出发地，目的地）分别为：
 * GuoHang001，武汉，北京；
 * LanHang001，南京，上海；
 * ShiHang003，武汉，上海；
 * HaiHang008，南京，北京，使用数组进行存放，
 * 并查询出某个出发地点的航班信息并在页面输出（需要查询的某个出发地通过输入框由用户输入）；
 * 查询出某个目的地的航班信息并在页面输出。（需要查询的某个目的地通过输入框由用户输入）
 */
var flight = [ // 存放航班信息
    ["GuoHang001", "武汉", "北京"],
    ["LanHang001", "南京", "上海"],
    ["Shihang003", "武汉", "上海"],
    ["HaiHang008", "南京", "北京"]
];
submit.onclick = function () {
    result.innerHTML = "搜索结果："; // 清空搜索结果
    var depart = document.getElementById('departure').value;
    var arrive = document.getElementById('arrival').value;
    for (i in flight) {
        if (depart == flight[i][1] && arrive == flight[i][2]) { // 
            result.innerHTML += "<br> 航班号：" + flight[i][0] + " 出发地：" + flight[i][1] + " 目的地：" + flight[i][2];
        } else if (depart == flight[i][1] && arrive == false) {
            result.innerHTML += "<br> 航班号：" + flight[i][0] + " 出发地：" + flight[i][1] + " 目的地：" + flight[i][2];
        } else if (arrive == flight[i][2] && depart == false) {
            result.innerHTML += "<br> 航班号：" + flight[i][0] + " 出发地：" + flight[i][1] + " 目的地：" + flight[i][2];
        }
    }
}