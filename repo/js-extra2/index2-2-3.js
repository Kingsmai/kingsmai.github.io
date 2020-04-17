var arr = [5, 3, 7, 2, 8, 1, 9, 5];
for (let i in arr) {
    for (let j = 0; i < arr.length; j++) {
        if (arr[i] < arr[j]) {
            var n = arr[j];
            arr[j] = arr[i];
            arr[i] = n;
        }
    }
}
document.body.insertAdjacentHTML("beforeend", arr);