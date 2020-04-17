// 现有三名同学，分别需要保存其姓名，分数，且相关信息由用户输入，完成输入后，将三名同学的信息在页面输出
var student = []; // 学生名字
var score = []; // 学生成绩
for (var i = 0; i < 3; i++) {
    student[i] = prompt("请输入学生姓名");
    score[i] = prompt("请输入学生成绩");
}
for (var i = 0; i < 3; i++) { // 输出
    document.body.innerHTML += student[i] + " " + score[i] + "<br>"
}