// 现有两个有序数组 [1, 2, 5, 9, 10]、[3, 4, 6, 9, 10]，请通过js来寻找这两个有序数组最小相同元素。
var arr1 = [1, 2, 5, 9, 10];
var arr2 = [3, 4, 6, 9, 10];

function SmallestSame(attr1, attr2) {
    for (let i = 0; i < attr1.length; i++) {
        for (let j = 0; j < attr2.length; j++) {
            if (attr1[i] == attr2[j]) {
                return attr2[j];
            }
        }
    }
}

console.log(SmallestSame(arr1, arr2));