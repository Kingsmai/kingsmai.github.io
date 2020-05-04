// 定义一个函数: 可以把数组中的下标为 3 的元素移到数组的开头
var arr = [100, 12, 34, 67, 23, 34, -2, 0, 666, 1000];
console.log(`原数组：${arr}`);
var temp = arr.splice(3, 1);
temp = temp.concat(arr);
console.log(temp);