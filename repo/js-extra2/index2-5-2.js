// 5.	将数组temp = [ 1, 2, 3, 4, 5, 213, 123, 213, 21, 321321 ]中的元素随机排序，并输出。
var temp = [1, 2, 3, 4, 5, 213, 123, 213, 21, 321321];
var newArr = new Array();
document.body.innerHTML += `排序前的数组为：${temp} <br>`;
var len = temp.length;  // 获取原数组长度
// 因为原数组的长度会在循环中逐渐减少，而 for 循环的第二段语句会重复取值
// 所以不能将for循环写成：
// for (let i = 0; i < temp.length; i++){}
for (let i = 0; i < len; i++){
    // 随机获取一个值，放在 num 变量里
    // 以下语句大概意思是 “取随机值，乘以目前temp变量长度，再下取整”
    var num = Math.floor(Math.random()*(temp.length));
    // 在 newArr 添加下标为 “上一段代码所获取随机值” 的数组元素
    newArr.push(temp[num]);
    // 在原有的数组元素删除掉已经添加到 newArr 的数组元素
    temp.splice(num, 1); 
    // 执行完上一段代码后，temp.length 就会少一个，这就影响了第 6 行注释所说的情况
}
document.body.innerHTML += `排序后的数组为：${newArr}`;