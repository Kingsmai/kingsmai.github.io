// 实现一个打点计时器，要求
// a、从 start 到 end（包含 start 和 end），每隔 100 毫秒 console.log 一个数字，每次数字增幅为1 
// b、返回的对象中需要包含一个 cancel 方法，用于停止定时操作
// c、第一个数需要立即输出

function count(start, end) {
    if (start <= end) {
        console.log(start);
        start++;
        st = setTimeout(function () {
            count(start, end)
        }, 100);
    }
    return {
        cancel: function () {
            clearTimeout(st);
        }
    }
}