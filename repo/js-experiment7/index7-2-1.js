// 现有一句英文"I am the most handsome in Wuhan Business College"，在该句子中找到所以最长的单词，并计算它的长度。
var str = "I am the most handsome in Wuhan Business College";
var words = str.split(" ");
var count = new Array();
for (let i in words) {
    count.push(words[i].length);
}
var max = Math.max.apply(null, count);
var index = count.indexOf(max);
var longest_word = words[index];
console.log(`最长的单词: ${longest_word}, 长度: ${max}`);