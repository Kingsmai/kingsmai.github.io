// 获取系统的当前日期和时间，并在页面上输出。输出格式为：2019年3月1日  13:24:45
var data = new Date();
var year = data.getFullYear() + "年";
var month = data.getMonth() + 1 + "月";
var day = data.getDate() + "日";
var hour = data.getHours() + ":";
var minute = data.getMinutes() + ":";
var second = data.getSeconds();
console.log(data);
document.write(year + month + day + " " + hour + minute + second);