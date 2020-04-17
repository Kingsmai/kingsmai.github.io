// 有这样一个URL：http://item.taobao.com/item.htm?a=1&b=2&c=&d=xxx&e，
// 请写一段JS程序提取URL中的各个GET参数(参数名和参数个数不确定)，
// 将其按key-value形式返回到一个json结构中，如{a:’1′, b:’2′, c:”, d:’xxx’, e:undefined}

/**
 *写出一个函数来解析url的search参数，使之成为一个json对象
 */
//思路：var url=window.location.search;获取当前页面url地址?及后面的参数
//1.先声明一个空对象，用来存储url的search参数
//2.从以问号分割字符串为数组，取下标为1的值即为url参数字符串
//3.将参数字符串以&分割为数组
//4.遍历这个数组，将每一项以=分割，问号前的值作为jsonList的键，问号后的值作为jsonList的值,这样就生成了一个js对象
//5.最后将这个对象通过JSON.stringify转化为json对象

var url = "http://item.taobao.com/item.htm?a=1&b=2&c=&d=xxx&e";

function searchParams(url) {
    var jsonList = {};
    if (url.indexOf('?') != -1) {
        const search = url.split('?')[1].split('&');
        for (var i = 0; i < search.length; i++) {
            jsonList[search[i].split('=')[0]] = search[i].split('=')[1]
        }
    }
    console.log(jsonList);
    // return JSON.stringify(jsonList)
    // console.log(JSON.stringify(jsonList))
}
searchParams(url);