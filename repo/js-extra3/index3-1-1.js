// 要求用面向对象的方法记录从客户端获取三位工人的信息（包括姓名，年龄，性别），并以表格的形式输出。
function Worker() {
    this.name = prompt(`请输入员工姓名`);
    this.age = prompt(`请输入员工年龄`);
    this.sex = prompt(`请输入员工性别`);
}
var worker = new Array();
for (let i = 0; i < 3; i++) {
    worker[i] = new Worker();
}
console.table(worker);
// Create table
var table = document.createElement('table');
table.border = 1;
// Create tbody
var tbody = document.createElement('tbody');
table.appendChild(tbody);
// Create Header
var headRow = document.createElement('tr');
tbody.appendChild(headRow);
var headCol_1 = document.createElement('th');
var headCol_2 = document.createElement('th');
var headCol_3 = document.createElement('th');
headCol_1.appendChild(document.createTextNode(`姓名`));
headCol_2.appendChild(document.createTextNode(`年龄`));
headCol_3.appendChild(document.createTextNode(`性别`));
headRow.appendChild(headCol_1);
headRow.appendChild(headCol_2);
headRow.appendChild(headCol_3);
// Create Table Body
for (let i in worker) {
    var bodyRow = document.createElement('tr');
    tbody.appendChild(bodyRow);
    var bodyCol_1 = document.createElement('td');
    var bodyCol_2 = document.createElement('td');
    var bodyCol_3 = document.createElement('td');
    bodyCol_1.appendChild(document.createTextNode(worker[i].name));
    bodyCol_2.appendChild(document.createTextNode(worker[i].age));
    bodyCol_3.appendChild(document.createTextNode(worker[i].sex));
    bodyRow.appendChild(bodyCol_1);
    bodyRow.appendChild(bodyCol_2);
    bodyRow.appendChild(bodyCol_3);
}
document.body.appendChild(table);