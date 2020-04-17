// 写出一个javascript的函数，
// 实现对数组attr[5,2,12,’n’,34,1,43,3,3,7,2,8,’m’,1,9,5],实现去重的功能。其中数组元素均为基本类性。
var attr = [5, 2, 12, 'n', 34, 1, 43, 3, 3, 7, 2, 8, 'm', 1, 9, 5];
var newArr = new Array();
document.body.innerHTML += `Base Array: ${attr} <br>`;
/**
 * @param {[]} baseArr 传入需要查重的数组
 * @param {[]} uniqueArr 传入新的数组
 */
function Unique(baseArr = [], uniqueArr = []) {
    for (let i = 0; i < baseArr.length; i++) {
        // indexOf() 方法可返回数组中某个指定的元素位置。
        if (uniqueArr.indexOf(baseArr[i]) == -1) {  // 如果在数组中没找到指定元素则返回 -1。
            uniqueArr.push(baseArr[i]);
        }
    }
    return;
}
Unique(attr, newArr);
document.body.innerHTML += `Unique Array: ${newArr}`;