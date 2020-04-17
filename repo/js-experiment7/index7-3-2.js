function parseQueryString(url = "") {
    // 拆开 ? 获取之后的值，再拆分 & 的值分出各个变量
    var items = url.split("?")[1].split("&");
    var arr, json = {};
    for (let i in items) {
        arr = items[i].split("=");
        json[arr[0]] = arr[1];
    }
    return json;
}
var url = "http://item.taobao.com/item.htm?a=1&b=2&c=&d=xxx&e=undefined";
var obj = parseQueryString(url);
console.log(obj);