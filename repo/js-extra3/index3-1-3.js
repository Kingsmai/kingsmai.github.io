var worker = [
    {name: '',age: '',gender: ''},
    {name: '',age: '',gender: ''},
    {name: '',age: '',gender: ''},
];
for (let i = 0; i < worker.length; i++) {
    worker[i].name = window.prompt(`请输入第位${i+1}工人的姓名`);
    worker[i].age = window.prompt(`请输入第位${i+1}工人的年龄`);
    worker[i].gender = window.prompt(`请输入第位${i+1}工人的性别`);
}
document.body.innerHTML += `<table border='1' cellspacing='0'>`;
document.body.innerHTML += `<th>姓名</th><th>年龄</th><th>性别</th>`;
for (let i in worker) {
    document.body.innerHTML += `<tr><td>${worker[i].name}</td><td>${worker[i].age}</td><td>${worker[i].gender}</td></tr>`
}
document.body.innerHTML += `</table>`