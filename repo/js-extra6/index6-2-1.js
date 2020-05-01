// 一个游戏，前20关是每一关自身的分数，
// 21-30关每一关是10分
// 31-40关，每一关是20分
// 41-49关，每一关是30分
// 50关，是100分
// 输入你现在闯到的关卡数，求你现在拥有的分数 。

function Calculate() {
    var level = parseInt(document.getElementById("levelInput").value);
    var score = 0;
    score = level;
    for (i = level; i > 20; i--) {
        if (i >= 21 && i <= 30) {
            score += 10;
        } else if (i >= 31 && i <= 40) {
            score += 10;
        } else if (i >= 41 && i <= 49) {
            score += 10;
        } else {
            score += 100;
        }
    }
    document.body.insertAdjacentHTML("beforeend", score);
}