// 定义一个含有40个整型元素的数组Arr1，Arr1中元素按顺序分别赋予从2开始的偶数；
// 然后按顺序每五个数求出一个平均值，平均值放在另一个数组Arr2中并输出。
var arr1 = new Array(40);
var arr2 = new Array();
var sum = 0;
for (let i = 1; i <= arr1.length; i++) {
    // Arr1中元素按顺序分别赋予从2开始的偶数
    arr1[i - 1] = 2 * i;
    // 每五个数求出一个平均值
    if (i % 5 != 0) {
        sum += arr1[i - 1];
    } else {
        // 平均值放在另一个数组Arr2
        arr2.push(sum + arr1[i - 1] / 5);
        sum = 0;
    }
}
document.body.insertAdjacentHTML("beforeend", `Arr1: ${arr1} <br>`);
document.body.insertAdjacentHTML("beforeend", `Arr2: ${arr2} <br>`);