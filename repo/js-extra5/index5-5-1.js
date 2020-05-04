// 通过循环按行顺序为一个5×5的二维数组a赋1到25的自然数，然后输出该数组其中左下半三角为红色字体。
for (let i = 1, count = 1; i <= 5; i++) {
    for (let j = 1; j <= 5; j++) {
        if (j <= i) {
            document.write(`<div style="display: inline-block; width: 32px; height: 32px; color: red;">${count}</div>`);
        } else {
            document.write(`<div style="display: inline-block; width: 32px; height: 32px;">${count}</div>`);
        }
        count++;
    }
    document.write(`<br>`);
}