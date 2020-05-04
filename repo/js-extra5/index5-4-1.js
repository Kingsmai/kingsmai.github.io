// 一个数组中有20个元素，对前10个元素使用升序，后10个元素使用降序。元素都是整数。
var arr = [100, 12, 34, 67, 23, 16, 6, 9, 24, 79, 2, 90, 33, 69, 1, 34, -2, 0, 666, 1000];
var firstTen = arr.splice(0, 10);
firstTen.sort((a, b) => a - b);
arr.sort((a, b) => b - a);
firstTen = firstTen.concat(arr);
console.log(firstTen);