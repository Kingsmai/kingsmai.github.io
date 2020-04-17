function GetJSON(url) {
    // * String.prototype.indexOf()
    // indexOf() 方法返回调用它的 String 对象中第一次出现的指定值的索引，从 fromIndex 处进行搜索。如果未找到该值，则返回 -1。
    // str.indexOf(searchValue [, fromIndex])
    // * URl 参数 '?' 分隔实际 URL 和 参数
    var num = url.indexOf("?");
    // * String.prototype.substring()
    // substring() 方法返回一个字符串在开始索引到结束索引之间的一个子集, 或从开始索引直到字符串的末尾的一个子集。
    // str.substring(indexStart[, indexEnd])
    var _strings = url.substring(num + 1);
    // 分割每一个参数变量
    // * URL 参数 '&' URL 中指定参数间的分隔符
    var arr = _strings.split("&");
    // 分隔每一个变量和值
    var newArr = new Array();
    // * URL 参数 '=' URL 中指定参数的值
    for (let i in arr) {
        var temp = arr[i].split("=");
        newArr.push(temp);
    }
    var get = function () {
        var obj = {};
        for (let j in newArr) {
            obj[newArr[j][0]] = newArr[j][1];
            console.log(newArr[j][1]);
        }
        return obj;
    }
    return get;
}
var url = "http://item.taobao.com/item.htm?a=1&b=2&c=&d=xxx&e=undefined";
var ee = GetJSON(url);
var _obj = ee();
console.info(_obj);