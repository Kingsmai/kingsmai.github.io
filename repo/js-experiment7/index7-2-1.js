// 现有一句英文"I am the most handsome in Wuhan Business College"，在该句子中找到所以最长的单词，并计算它的长度。
var str = "I am the most handsome in Wuhan Business College";
var words = str.split(" ");
var count = new Array();
for (let i in words) {
    count.push(words[i].length);
}
// Math.max() 函数返回一组数中的最大值。
// https://developer.mozilla.org/zh-CN/docs/Web/JavaScript/Reference/Global_Objects/Math/max
// 下面的方法使用 apply 方法寻找一个数值数组中的最大元素。
// apply() 方法调用一个具有给定this值的函数，以及作为一个数组（或类似数组对象）提供的参数。
// https://developer.mozilla.org/zh-CN/docs/Web/JavaScript/Reference/Global_Objects/Function/apply
var max = Math.max.apply(null, count);
// 找到 max 的第一个下标
var index = count.indexOf(max);
var longest_word = words[index];
console.log(`最长的单词: ${longest_word}, 长度: ${max}`);