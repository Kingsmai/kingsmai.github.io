// 用js实现随机选取10~100之间的10个数字，存入一个数组，并有小到大排序后输出。
// （提示：random，sort函数，push）
var arr = new Array();
for (let i = 0; i < 10; i++) {
    arr.push(GetRndNum(10, 100));
};
document.write(`Before Sort: ${arr} <br>`);
arr.sort(SortNumber);
document.write(`After Sort: ${arr} <br>`);

/**
 * @method GetRandomNumber
 * @description Return a random number between min and max
 * @param {Number} min 
 * @param {Number} max 
 */
function GetRndNum(min, max) {
    return Math.abs(Math.floor(Math.random() * (max - min + 1)) + min);
}

// 因为 sort 函数不能会出现这样的效果：100, 13, 25 ...
function SortNumber(a, b) {  // 对数字进行排序
    return a - b;   // 升序
}