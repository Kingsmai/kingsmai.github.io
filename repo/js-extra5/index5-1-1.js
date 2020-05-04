// 统计字符串str =“asfesWsdA”;中每个字符的个数
var str = "asfesWsdA"

function getCount(str) {
    //判断字符串中有几个小写字母 "a"
    for (var code = 32; code <= 127; code++) {
        //根据code值得到对应的字符
        var char = String.fromCharCode(code);

        //判断mych在str中出现的次数
        var count = 0;
        for (let i in str) {
            var ch = str.charAt(i); //取出某个索引位置处的字符
            if (ch == char) {
                count++;
            }
        }
        //判断 如果count的值大于0  说明该字符存在  就输出
        if (count > 0) {
            //输出当前code对应的字符的个数
            console.log("字符" + char + "在字符串中出现了" + count + "次");
        }
    }
}
getCount(str);