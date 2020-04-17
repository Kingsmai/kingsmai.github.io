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
]; // 定义数组
var total = 0; // 总分
var avg = 0; // 平均分
var min = ["名字", 100]; // 记录数组（最小值）
var max = ["名字", 0]; // 记录数组（最大值）

for (var i = 0; i < result.length; i++) {
    min = result[i][1] < min[1] ? result[i] : min; // 判断最小值，并将整个数组赋值给最小数组
    max = result[i][1] > max[1] ? result[i] : max; // 同上，只不过判断最大值
    total += result[i][1]; // 计算总分
}
avg = parseFloat(total / result.length); // 用总分除去整个数组长度
console.log("最低分: " + min[1] + ", 学生姓名: " + min[0]);
console.log("最高分: " + max[1] + ", 学生姓名: " + max[0]);
console.log("总分: " + total);
console.log("平均: " + avg);