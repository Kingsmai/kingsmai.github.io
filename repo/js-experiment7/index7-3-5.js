// ! 有 BUG
function GetJSON(url = ""){
    var items = url.split("?")[1].split("&");
    var arr = new Array();
    for (let i in items){
        // * String.prototype.replace()
        // replace() 方法返回一个由替换值（replacement）替换一些或所有匹配的模式（pattern）后的新字符串。
        // 模式可以是一个字符串或者一个正则表达式，替换值可以是一个字符串或者一个每次匹配都要调用的回调函数。
        // str.replace(regexp|substr, newSubStr|function)
        var temp = items[i].replace('=', ':');
        arr.push(temp);
    }
    console.log(arr);
    var get = function () {
        var obj = {};
        for (let j in arr) {
            obj[arr[j][0]] = arr[j][2];
            console.log(arr[j][2]);
        }
        return obj;
    }
    return get;
}
var url = "http://item.taobao.com/item.htm?a=1&b=2&c=&d=xxx&e=undefined";
var ee = GetJSON(url);
var _obj = ee();
console.info(_obj);