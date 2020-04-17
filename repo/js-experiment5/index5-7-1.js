// 定义一个函数: 可以把数组中的下标为 3 的元素移到数组的开头. （提示: 传入一个数组，使用splice方法。）
var test = [45, 42, 9, 38, 4, 89, 41];
ArrayMove(test);
/**
 * @description Move index3 to first
 * @param {Array} arr 
 */
function ArrayMove(arr){
    document.body.innerHTML += `Base Array: ${arr} <br>`;
    var temp = arr.splice(3);
    document.body.innerHTML += `Splice Temp: ${temp} <br>`;
    document.body.innerHTML += `Base Array: ${arr} <br>`;
    arr = temp.concat(arr);
    document.body.innerHTML += `Output: ${arr} <br>`;
}