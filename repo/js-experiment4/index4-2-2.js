var arr = new Array();
for (let i = 0; i < 10; i++) {
    arr.push(Math.abs(Math.floor(Math.random() * (100 - 10 + 1)) + 10));
};
document.body.innerHTML += "排序前: " + arr + "<br>";
arr.sort(function(a, b){return a - b});
document.body.innerHTML += "排序后: " + arr;