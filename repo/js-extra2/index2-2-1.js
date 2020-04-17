// 现有数组arr[5,3,7,2,8,1,9,5],对该数组进行从小到大排序，并输出排序后的数组。
// 超级无敌笨方法
var arr = [5, 3, 7, 2, 8, 1, 9, 5];
document.body.innerHTML = `Before Arrange: ${arr} <br>`;
for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
        if (arr[j] > arr[j + 1]) {
            var temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}
document.body.innerHTML += `After Arrange ${arr}`;