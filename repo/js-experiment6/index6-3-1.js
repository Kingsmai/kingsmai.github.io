// 有一个棋盘，有64个方格，在第一个方格里面放1粒芝麻重量是0.00001kg，
// 第二个里面放2粒，第三个里面放4，棋盘上放的所有芝麻的重量。
var chessBoard = 64;
var weight = 0.00001;
var sum = 1;
for (let i = 0; i < chessBoard; i++) {
    sum += Math.pow(2, i);
}
document.body.insertAdjacentHTML("beforeend", `所有芝麻重量: ${((sum * weight) + 'kg')}`);