// 现有5名同学，包含姓名和性别，信息分别为：刘德华，男；张学友，男，王菲，女，周润发，男，梅艳芳，女，
// 现编写一个随机点名程序，如图所示，当点击“随机点名”按钮后，第一个按钮随机显示姓名。
var nameBtn = document.getElementById("nameDisp");
var student = [
    ["刘德华", "男"],
    ["张学友", "男"],
    ["王  菲", "女"],
    ["周润发", "男"],
    ["梅艳芳", "女"]
]

function RndName() {
    nameBtn.value = student[Math.floor(Math.random() * student.length)][0];
}