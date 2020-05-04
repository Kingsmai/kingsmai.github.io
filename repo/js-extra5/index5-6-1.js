// 建立字符串处理函数，将字符串的大写字母转换为小写字母（第一个字母元素除外），并在其前面加上空格。例如：HelloMyworld => Hello my world
// function CreateSentence(str = "HelloMyWorld") {
//     str = str.split("");
//     console.log(str);
//     for (let i = 1; i < str.length; i++) {
//         if (str[i] >= "A" && str[i] <= "Z") {

//         }
//     }
//     console.log(str);
// }
// CreateSentence();

// function titleCase(str) {
//     var array = str.toLowerCase().split(" ");
//     for (var i = 0; i < array.length; i++) {
//         array[i] = array[i][0].toUpperCase() + array[i].substring(1, array[i].length);
//     }
//     var string = array.join(" ");
//     return string;
// }

// console.log(titleCase("HelloMyworld"));

function ChangeString(str) {
    var arr = str.split("");
    for (let i in arr) {
        if (/[A-Z]/.test(arr[i])) {
            arr.splice(i, 1, " ", arr[i].toString().toLowerCase());
        }
    }
    return arr.join("");
}
var str = "HelloMyWorld";
alert(ChangeString(str));