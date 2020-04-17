// 入职薪水10K，每年涨幅5%，50年后工资多少
var salary = 10000; // 初始薪水 10k
for (var i = 0; i < 50; i++) { // 重复50年
    salary += salary * 0.05; // 计算薪水
}
alert("50年后的工资: " + salary.toFixed(2)); // 输出结果，保留后两位小数