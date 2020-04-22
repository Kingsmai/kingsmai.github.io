var arr = [1, 2, 3, 4];
var newArr = new Array();
square(arr);

function square(arr) {
    for (let i in arr) {
        newArr.push(arr[i] * arr[i]);
    }
    document.write(arr.concat(newArr));
}