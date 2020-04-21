// 实现一个打点计时器，要求
// a、从 start 到 end（包含 start 和 end），每隔 100 毫秒 console.log 一个数字，每次数字增幅为1 
// b、返回的对象中需要包含一个 cancel 方法，用于停止定时操作
// c、第一个数需要立即输出
function Counter(start, end) {
    // 立即输出第一个数
    console.log(start++);
    // 每隔 100 毫秒 console.log 一个数字
    timer = setInterval(() => {
        if (start <= end) {
            // 每次数字增幅为1
            console.log(start++);
        }
    }, 100);
    // 返回的对象中需要
    return {
        // 包含一个 cancel 方法
        cancel: () => {
            // 用于停止定时操作
            clearInterval(timer);
        }
    }
}
Counter(0, 100);