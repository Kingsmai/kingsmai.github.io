// 5.	将数组temp = [ 1, 2, 3, 4, 5, 213, 123, 213, 21, 321321 ]中的元素随机排序，并输出。
var temp = [1, 2, 3, 4, 5, 213, 123, 213, 21, 321321];
var newArr = new Array();
document.body.innerHTML += `排序前的数组为：${temp} <br>`;
var len = temp.length;
console.log(`初始 temp 数组长度为：${len}`);
for (let i = 0; i < len; i++){
    console.count("循环次数");
    console.log(`temp 数组长度：${temp.length}`);
    var num = Math.floor(Math.random()*(temp.length));
    console.log(`Random number: ${num}`);
    newArr.push(temp[num]);
    console.log(`newArr: ${newArr}`);
    temp.splice(num, 1); 
    console.log(`temp Array: ${temp}`);
}
document.body.innerHTML += `排序后的数组为：${newArr}`;