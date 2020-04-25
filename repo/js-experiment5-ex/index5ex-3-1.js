// 编写一个函数，该函数功能是求一个数组中最大的数，并将结果输出。数组的值由用户动态输入。
var arrLen = prompt(`Please input array length`);
var arr = [];
for (let i = 0; i < arrLen; i++) {
    arr[i] = prompt(`Please input a value`);
}
console.log(arr);
arr.sort((a, b) => b - a);
console.log(arr[0]);