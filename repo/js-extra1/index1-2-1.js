// 判断当前时间是凌晨（0-6）、上午（6-12）、下午（12-18）或是晚上（18-24），并弹出。
var hour = new Date
hour = hour.getHours();
switch (hour) {
    case 0: case 1: case 2: case 3: case 4: case 5:
        alert("凌晨");
        break;
    case 6: case 7: case 8: case 9: case 10: case 11:
        alert("上午");
        break;
    case 12: case 13: case 14: case 15: case 16: case 17:
        alert("下午");
        break;
    case 18: case 19: case 20: case 21: case 22: case 23:
        alert("晚上");
        break;
}