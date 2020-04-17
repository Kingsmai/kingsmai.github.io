// 用js实现随机选取10~100之间的10个数字。
function RandomNumber(min, max) {
    return Math.abs(Math.floor(Math.random() * (max - min + 1)) + min); // 取绝对值，下取整
}
for (var i = 0; i < 10; i++) {
    console.log(RandomNumber(10, 100));
}