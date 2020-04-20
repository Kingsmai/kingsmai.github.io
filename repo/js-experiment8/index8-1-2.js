// 封装函数: 把两个数组[1, 2, 3, "aaa", "hello", 999, -1]、[3, 78, "aaa", "bbb", 99, 1, -1, "hello"]共同的元素放入一个新的数组, 并返回新的数组提示: 传入两个数组, 返回值为新的数组
var arr1 = [1, 2, 3, "aaa", "hello", 999, -1];
var arr2 = [3, 78, "aaa", "bbb", 99, 1, -1, "hello"];
function CombineSame(attr1, attr2) {
    var newArr = new Array();
    for (let i in arr1) {
        for (let j in arr2) {
            if (arr1[i] == arr2[j] && newArr.indexOf(arr2[j]) == -1) {
                newArr.push(arr1[i]);
            }
        }
    }
    return newArr;
}
console.log(`arr1: ${arr1}`);
console.log(`arr2: ${arr2}`);
console.log(`CombineSame(arr1, arr2): ${CombineSame(arr1, arr2)}`);