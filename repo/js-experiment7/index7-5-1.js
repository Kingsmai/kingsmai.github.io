// 求所有满足条件的四位数ABCD，它是13的倍数，且第3位数加上第2位数等于第4位数
// （即A=B+C）。
var arr = [];
document.write("满足条件的四位数为:");
document.write("<br / >");
for (var i=1000; i<10000; i++)
{
    // var a = parseInt(i / 1 % 10);
    var a = parseInt(i / 1000);
    // var b = parseInt(i / 10 % 10);
    var b = parseInt((i - a * 1000) / 100);
    // var c = parseInt(i / 100 % 10);
    var c = parseInt((i - a * 1000 - b * 100) / 10);
    // var d = parseInt(i / 1000 % 10);
    var d = parseInt(i % 10);
    var D = parseInt(i - a * 1000 - b * 100 - c * 10);
    console.log(`${d}, ${D}`);
    if(i%13 == 0 && (c+b) == d)
    {
        document.write(i);
        document.write(" ");
    }
}