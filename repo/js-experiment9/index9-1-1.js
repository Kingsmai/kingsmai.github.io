// 编写一个函数对传入的字符串str=[‘a’,’w’,’b’,’e’,’f’,’h’,’d’,’c’]重新按字母由小到大进行排序。（先用split，再sort，再join）
function SortString(str) {
    return str.split("").sort().join("");
}
console.log(SortString('awbefhdc'));