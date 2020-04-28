// 假设某人有 100,000  现金。 每经过一次路口需要进行一次交费。
// 交费规则为当他现金大于50,000  时每次需要交 5%，如果现金小于等于 50,000  时每次交 5,000 。
// 请写一程序计算此人可以经过多少次这个路口。
var rmb = 100000;
var count = 0;

function PayFee(cash) {
    if (cash > 50000) {
        cash = cash - (cash * 0.05);
    } else if (cash > 5000) {
        cash -= 5000;
    }
    return cash.toFixed(2);
}

while (rmb > 5000) {
    rmb = PayFee(rmb);
    count++;
}
console.log(`共可经过：${count}次`);