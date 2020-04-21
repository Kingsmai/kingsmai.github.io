// 要求用面向对象的方法记录从客户端获取三位工人的信息（包括姓名，年龄，性别），并以表格的形式输出。
function Worker() {
    this.name = prompt("请输入员工姓名");
    this.age = prompt("请输入员工年龄");
    this.sex = prompt("请输入员工性别");
}
var worker = [];
for (var i = 0; i < 3; i++) {
    worker[i] = new Worker();
}

document.write("<table border='1' width='500'>");
document.write("<tr>");
document.write("<th>姓名</th>");
document.write("<th>年龄</th>");
document.write("<th>性别</th>");
document.write("</tr>");
for (var i = 0; i < 3; i++) {
    document.write("<tr>");
    document.write("<td>" + worker[i].name + "</td>");
    document.write("<td>" + worker[i].age + "</td>");
    document.write("<td>" + worker[i].sex + "</td>");
    document.write("</tr>");
}
document.write("</ table>");