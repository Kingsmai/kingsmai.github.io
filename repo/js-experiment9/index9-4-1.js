/**
 * 窗体上点击“抽奖”按钮，调用所定义的函数进行抽奖。
 * 抽奖函数为：用变量和函数，设计模拟幸运数字机游戏。
 * 设幸运数字为8， 每次由计算机随机产生3个1~9（包括1和9）的随机数，当这三个随机数中有一个数字为8时，就算赢了一次，并计算获胜率。
 * （提示：confirm 产生确认框，点击“确定”返为true，点击“取消”返回值为false。）
 */
var rounds = 0; // 场次
var win = 0; // 记录胜场
var winRate = 0; // 胜率

function GetRndNum(min, max) {
    return Math.floor(Math.random() * (max - min + min)) + min;
}

function Game() {
    rounds++;
    while (true) {
        var luckyNumber = parseInt(prompt(`请输入幸运数字 1 ~ 9`));
        if (!luckyNumber) {
            alert(`游戏结束！`);
            return;
        }
        if (!isNaN(luckyNumber) && luckyNumber >= 1 && luckyNumber <= 9) {
            break;
        } else {
            alert(`请输入介于 1 ~ 9 的有效数值`);
        }
    }
    var rndNumArr = new Array();
    var result = "" // 胜负
    for (let i = 0; i < 3; i++) {
        rndNumArr.push(GetRndNum(1, 9));
    }
    if (rndNumArr.indexOf(luckyNumber) != -1) {
        result = "赢";
        win++;
    } else {
        result = "输"
    }
    winRate = ((win / rounds) * 100).toFixed(2);
    var gameOver = confirm(`${rndNumArr}\n${result}\n胜率: ${winRate}%, 想继续吗？`);
    if (!gameOver) {
        alert(`游戏结束！`);
        return;
    } else {
        Game();
    }
}