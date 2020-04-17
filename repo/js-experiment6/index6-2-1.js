// 随机在（0,1000000）不包括1000000，生成一个整数，然后输出该数共有多少位，每位分别是什么？(提示：将该数转换为字符串进行处理)
var num = (Math.floor(Math.random() * 1000000)).toString();
for (let i in num) {
    console.log(`第${i}位：${num[i]}`);
}
console.log(`共有：${num.length}`);