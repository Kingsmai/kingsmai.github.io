// 把用户输入的数据累加，直到输入零为止，输出累加的结果。
var sum = 0;
while (true) {
    var num = Number(prompt("Please insert Value:"));
    if (!isNaN(num)) {
        if (num != 0) {
            sum += num;
        } else {
            break;
        }
    } else {
        alert(`Input must be a number!`);
    }
};
document.body.insertAdjacentText("afterbegin", sum);