function serlize(url) {
    var result = {}; //定义一个json对象
    //1、寻找 ? 后面的字符串
    url = url.split("?")[1];
    //2、将字符串用 & 分隔
    var args = url.split("&"); //[a=1,b=2,c=,d=xxx,e=undefined]
    var len = args.length;
    for (var i = 0; i < len; i++) {
        var arg = args[i];
        var item = arg.split('=');
        //3、用item[0]作为result对象的键，用item[1]作为对应的值
        result[item[0]] = item[1];
    }
    return result;
}
console.log(serlize("http://item.taobao.com/item.htm?a=1&b=2&c=&d=xxx&e=undefined"));