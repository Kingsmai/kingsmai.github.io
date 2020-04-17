// 一个数字中有20个整型元素，编写程序对前10个元素使用升序，后10个元素使用降序。 元素都是。
// （元素初始值为：100, 12, 34, 67, 23, 16, 6, 9, 24, 79, 2, 90, 33, 69, 1, 34, -2, 0, 666, 1000）
// （提示：使用slice组成两个数组，然后对两个数组分别使用sort方法排序，然后再组合成新的数组）
var arr = [100, 12, 34, 67, 23, 16, 6, 9, 24, 79, 2, 90, 33, 69, 1, 34, -2, 0, 666, 1000];
var firstTen = arr.slice(0, 10);    // 去掉后面10个
var lastTen = arr.slice(-10);     // 去掉前面10个
document.body.innerHTML += `Base array: ${arr} <br>`;
document.body.innerHTML += `First Ten array: ${firstTen} <br>`;
document.body.innerHTML += `Last Ten array: ${lastTen} <br>`;
firstTen.sort(function(a, b){return a - b});    // 正序排序
lastTen.sort(function(a, b){return b - a}); // 降序排序
document.body.innerHTML += `First Ten array sorted: ${firstTen} <br>`;
document.body.innerHTML += `Last Ten array sorted: ${lastTen} <br>`;
var sorted = firstTen.concat(lastTen);  // 组合两个数组
document.body.innerHTML += `Sorted & Combined: ${sorted} <br>`;