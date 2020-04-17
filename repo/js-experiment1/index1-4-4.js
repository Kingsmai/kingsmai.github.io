// 读取学生的10门课的成绩分别为
// 小花：90、小明：78、小李：50、小昭：56、关云：78、
// 婷婷：42、海婷：70、小海：65、小红：75、张三：80。
// 然后输出10门课成绩的最高分及姓名, 最低分及姓名, 总分, 平均分.
// 面向对象解法
var total = 0;
var max = 0;
var min = 100;
var xmin;
var xmax;

function Result(_name, _score) { // 声明类
    this.name = _name;
    this.score = _score;
}
var student = [
    new Result("小花", 90), new Result("小明", 78),
    new Result("小李", 50), new Result("小昭", 56),
    new Result("关云", 78), new Result("婷婷", 42),
    new Result("海婷", 70), new Result("小海", 65),
    new Result("小红", 75), new Result("张三", 80)
]
for (let i = 0; i < student.length; i++) {
    if (student[i].score < min) {
        min = student[i].score;
        xmin = i;
    }
    if (student[i].score > max) {
        max = student.score;
        xmax = i;
    }
    total += student[i].score;
    console.log(student[i].name);
}
console.log("Lowest: " + (student[xmin].name) + " " + (student[xmin].score));
console.log("Highest: " + (student[xmax].name) + " " + (student[xmax].score));
console.log("Total: " + total);
console.log("Average: " + (total / student.length));