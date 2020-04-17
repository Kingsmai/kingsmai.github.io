// 为抵抗洪水，战士连续作战89小时，编程计算共多少天零多少小时？
var hours = 89;
var days = hours / 24; // 计算天数
hours %= 24; // 计算小时
alert(parseInt(days) + "天" + hours + "小时");
alert(Math.floor(days) + "天" + hours + "小时");
// Math.ceil(x) 对数进行上舍入
// Math.floor(x)对数进行下舍入
// Math.round(x)四舍五入