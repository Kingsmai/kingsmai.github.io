// 读取学生的10门课的成绩分别为
// 小花：90、小明：78、小李：50、小昭：56、关云：78、
// 婷婷：42、海婷：70、小海：65、小红：75、张三：80。
// 然后输出10门课成绩的最高分及姓名, 最低分及姓名, 总分, 平均分.
var result = [{
        name: '小花',
        score: 90
    },
    {
        name: '小明',
        score: 78
    },
    {
        name: '小李',
        score: 50
    },
    {
        name: '小昭',
        score: 56
    },
    {
        name: '关云',
        score: 78
    },
    {
        name: '婷婷',
        score: 42
    },
    {
        name: '海婷',
        score: 70
    },
    {
        name: '小海',
        score: 65
    },
    {
        name: '小红',
        score: 75
    },
    {
        name: '张三',
        score: 80
    },
] // 定义数组，里面是物件
var max = 0; // 最高分
var min = 100; // 最低分
var maxName = ""; // 记录最高分名字
var minName = ""; // 记录最低分名字
var sum = 0; // 计算总分

for (i in result) { // 遍历循环所有物件
    if (max <= result[i].score) { // 当目前最高分小于学生分数
        max = result[i].score;
        maxName = result[i].name;
    }
    if (min > result[i].score) {
        min = result[i].score;
        minName = result[i].name;
    }
    sum += result[i].score;
}
console.log("最高分为: " + max + ", 姓名: " + maxName);
console.log("最低分为: " + min + ", 姓名: " + minName);
console.log("总分: " + sum);
console.log("平均分: " + (sum / 10));