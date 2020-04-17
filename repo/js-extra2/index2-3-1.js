/**
 * 3.学校运动会我们得到了一组参加比赛的人员数据，分别是姓名、性别、年龄和年级，
 * 利用JavaScript的知识挑出其中所有是大一的女生的的名字。
 * 学生信息如下：
 * ('小A','女',21,'大一'),('小B','男',23,'大三'),
 * ('小C','男',24,'大四'),('小D','女',21,'大一'),
 * ('小E','女',22,'大四'),('小F','男',21,'大一'),
 * ('小G','女',22,'大二'),('小H','女',20,'大三'),
 * ('小I','女',20,'大一'),('小J','男',20,'大三')
 */


function Athlete(aName, sex, age, grade) {
    this.name = aName;
    this.sex = sex;
    this.age = age;
    this.grade = grade;
}
var student = [
    new Athlete('小A', '女', 21, '大一'), new Athlete('小B', '男', 23, '大三'),
    new Athlete('小C', '男', 24, '大四'), new Athlete('小D', '女', 21, '大一'),
    new Athlete('小E', '女', 22, '大四'), new Athlete('小F', '男', 21, '大一'),
    new Athlete('小G', '女', 22, '大二'), new Athlete('小H', '女', 20, '大三'),
    new Athlete('小I', '女', 20, '大一'), new Athlete('小J', '男', 20, '大三')
]
for (let i in student) {
    if (student[i].sex == '女' && student[i].grade == "大一") {
        document.body.innerHTML += `${student[i].name} <br>`;
    }
}