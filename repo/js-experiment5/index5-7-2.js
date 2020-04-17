var test = [45, 42, 9, 38, 4, 89, 41];
function ThirdArrMove(arr = []){
    var temp = arr.splice(3, 1);
    return temp.concat(arr);
}
document.body.innerHTML += `BaseArray: ${test} <br>`;
document.body.innerHTML += `After moved: ${ThirdArrMove(test)}`;