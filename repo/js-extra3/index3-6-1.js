// 移除数组 arr 中的所有值与 item 相等的元素，直接在给定的 arr 数组上进行操作，并将结果返回
// 示例1:
// 输入 [1,2, 2, 3, 4, 2, 2], 2 输出 [1, 3, 4]
var arr = [1, 2, 2, 3, 4, 2, 2];
document.body.innerHTML += `Begin arr: ${arr} <br>`;
var item = Number(prompt(`Please input "Item"'s value:`));
document.body.innerHTML += `Item Value: ${item} <br>`;
for (let i = 0; i < arr.length; i++) {
    if (arr[i] == item) {
        arr.splice(i, 1);
        i--;
    }
}
document.body.innerHTML += `Final arr: ${arr}`;