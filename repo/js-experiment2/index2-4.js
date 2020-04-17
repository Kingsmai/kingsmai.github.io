// 输出九九乘法表
for (var i = 1; i <= 9; i++) {
    for (var j = 1; j <= i; j++) {
        document.write(j + "*" + i + "=" + (j * i + " "));
    }
    document.write("</br>");
}