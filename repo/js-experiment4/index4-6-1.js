// 将字符串按照单词进行逆序，空格作为划分单词的唯一条件。
// 传入:”Welome to Wuhan”改为 “Wuhan to Welcome”。（提示：split方法）
var input = prompt("Please input your words");
var output = input.split(" ");
document.body.innerHTML += `Input Words: `;
for (let i in input){
    document.body.innerHTML += `${input[i]}`
}
document.body.innerHTML += `<br>`;
output.reverse();
document.body.innerHTML += `Reversed Words: `
for (let i in output){
    document.body.innerHTML += `${output[i]} `;
}