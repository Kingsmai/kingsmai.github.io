// 为数组 arr 中的每个初始元素求二次方。二次方各个结果添加在原数组后面显示。
// 例如：初始arr=[1,2,3,4]，结果arr=[1,2,3,4,1,4,9,16]
var arr = [1, 2, 3, 4];
document.body.innerHTML += `Before Sqrt: [${arr}] <br>`;
for (let i in arr){
    arr.push(arr[i] * arr[i]);
}
document.body.innerHTML += `After Sqrt: [${arr}]`;