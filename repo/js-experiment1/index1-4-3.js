// 读取学生的10门课的成绩分别为
// 小花：90、小明：78、小李：50、小昭：56、关云：78、
// 婷婷：42、海婷：70、小海：65、小红：75、张三：80。
// 然后输出10门课成绩的最高分及姓名, 最低分及姓名, 总分, 平均分.
var result = [
    ["小花", 90],
    ["小明", 78],
    ["小李", 50],
    ["小昭", 56],
    ["关云", 78],
    ["婷婷", 42],
    ["海婷", 70],
    ["小海", 65],
    ["小红", 75],
    ["张三", 80]
];
var total = 0;
var avg = 0;
var min = 100;
var max = 0;
var xmin, xmax; // 临时变量
for (var i = 0; i < 10; i++) {
    if (result[i][1] < min) {
        min = result[i][1];
        xmin = i;
    }
    if (result[i][1] > max) {
        max = result[i][1];
        xmax = i;
    }
    total += result[i][1];
}
avg = total / 10;
console.log("最低分: " + min + ", 学生姓名: " + result[xmin][0]);
console.log("最高分: " + max + ", 学生姓名: " + result[xmax][0]);
console.log("总分: " + total);
console.log("平均: " + avg);