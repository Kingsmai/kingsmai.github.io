// 设置函数，统计数组 arr 中值等于 item 的元素出现的次数 
// 示例1 输入 [1, 2, 4, 4, 3, 4, 3], 4 输出 3
var arr = [1, 2, 4, 4, 3, 4, 3];
document.body.innerHTML += `Begin arr: ${arr} <br>`;
var item = Number(prompt(`Please input "Item"'s value:`));
document.body.innerHTML += `Item Value: ${item} <br>`;
var count = 0;
for (let i = 0; i < arr.length; i++) {
    if (arr[i] == item) {
        count++;
    }
}
document.body.innerHTML += `Count: ${count}`;