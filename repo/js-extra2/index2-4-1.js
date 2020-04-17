// 写出一个javascript的函数，实现对数组attr[5,2,12,’n’,34,1,43,3,3,7,2,8,’m’,1,9,5],实现去重的功能。其中数组元素均为基本类性。
attr = [5, 2, 12, 'n', 34, 1, 43, 3, 3, 7, 2, 8, 'm', 1, 9, 5];
unique = new Array();
for (i = 0; i < attr.length ; i++){
    if(!checkRepeat(attr[i])){
        unique.push(attr[i]);
    }
}
document.body.innerHTML += `Base Array: ${attr} <br>`;
document.body.innerHTML += `Unique Array: ${unique}`;
function checkRepeat(num){
    for (let i in unique){
        if (unique[i] == num){
            return true;
        }
    }
    return false
}