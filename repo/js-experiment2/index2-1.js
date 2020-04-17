// 编写程序．通过用户输入的年龄判断是哪个年龄段的人
// （儿童：年龄＜14；青少年：14<=年龄＜24；青年：24<=年龄＜40; 中年：40＜=年龄＜60; 老年：年龄>=60）
// 并在页面上输出判断结果
var age = prompt('请输入您的年龄: ', '10') // 输入提示，默认10岁
var ageRange = ""; // 设置空字符串
if (age < 14) {
    ageRange = "儿童";
} else if (age <= 14 && age < 24) {
    ageRange = "青少年"
} else if (age <= 24 && age < 40) {
    ageRange = "青年"
} else if (age <= 40 && age < 60) {
    ageRange = "中年"
} else if (age >= 60) {
    ageRange = "老年"
} else {
    ageRange = "Input Error!";
}
document.write(ageRange);