// 现有数组arr[5,3,7,2,8,1,9,5],对该数组进行从小到大排序，并输出排序后的数组。
var arr = [5, 3, 7, 2, 8, 1, 9, 5];
document.body.innerHTML = `Before Arrange: ${arr} <br>`;
arr.sort(function (a, b) { return a - b });
document.body.innerHTML = `After Arrange: ${arr} <br>`;