// 读取学生的10门课的成绩分别为
// 小花：90、小明：78、小李：50、小昭：56、关云：78、
// 婷婷：42、海婷：70、小海：65、小红：75、张三：80。
// 然后输出10门课成绩的最高分及姓名, 最低分及姓名, 总分, 平均分.
var result = [
    ["小花", "小明", "小李", "小昭", "关云", "婷婷", "海婷", "小海", "小红", "张三"],
    [90, 78, 50, 56, 78, 42, 70, 65, 75, 80]
];
var min = 100;
var max = 0;
var xmin; // 最低分下标
var xmax; // 最高分下标
var total = 0;
for (var i = 0; i < result[1].length; i++) {
    result[1][i] < min ? ((xmin = i), (min = result[1][i])) : xmin;
    result[1][i] > max ? ((xmax = i), (max = result[1][i])) : xmax;
    total += result[1][i];
}
console.log("最低分: " + result[0][xmin] + " " + result[1][xmin]);
console.log("最高分: " + result[0][xmax] + " " + result[1][xmax]);
console.log("总分: " + total);
console.log("总平均: " + total / result[1].length);