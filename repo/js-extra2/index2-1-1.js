// 创建数组，获取101-200之间所有3和7的公倍数，并用for  in 输出数组中各个数值+1后的值
var arr = new Array();
for (let i = 101; i <= 200; i++) {
    if (i % 3 == 0 && i % 7 == 0) {
        arr.push(i);
    }
}
document.body.innerHTML = `arr: ${arr}<br>`;
document.body.innerHTML += `各个数值+1后的值:<br>`;
for (let i in arr) {
    document.body.innerHTML += `${arr[i] + 1}, `
}