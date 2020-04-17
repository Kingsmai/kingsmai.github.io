// 为抵抗洪水，战士连续作战89小时，编程计算共多少天零多少小时？
var hours = 89; // 小时
var days = 0; // 天
while (hours > 24) {
    hours -= 24; // 扣除一天的时间
    days++;
}
alert("共战斗了: " + days + "天, " + hours + "小时");