function SerializeUrl(url = ""){
    var urlObject = {};
    // 正则表达式
    // test() 方法执行一个检索，用来查看正则表达式与指定的字符串是否匹配。返回 true 或 false。
    // regexObj.test(str)
    if (/\?/.test(url)){
        var urlString = url.substring(url.indexOf("?") + 1);
        var urlArray = urlString.split("&");
        for (let i = 0, len = urlArray.length; i < len; i++){
            var urlItem = urlArray[i];
            var item = urlItem.split("=");
            urlObject[item[0]] = item[1];
        }
        return urlObject;
    }
    return null;
}
var url = "http://item.taobao.com/item.htm?a=1&b=2&c=&d=xxx&e";
var obj = SerializeUrl(url);
console.log(obj);