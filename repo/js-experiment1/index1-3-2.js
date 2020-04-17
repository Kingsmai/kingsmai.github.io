// 用js实现随机选取10~100之间的10个数字。
for (var i = 0; i < 10; i++){
    console.log (Math.abs(Math.floor(Math.random() * (100 - 10 + 1)) + min));
}