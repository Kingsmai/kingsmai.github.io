// 通过函数传参，改变任意div的属性。其效果如图：在两个输入框里面输入相应的正确的属性及属性值，下面方块就会变换成相应的效果。
var attrName = document.getElementById("attrName");
var attrVal = document.getElementById("attrVal");
var changeBtn = document.getElementById("changeBtn");
var effect = document.getElementById("effect");
changeBtn.onclick = () => {
    effect.style[attrName.value] = attrVal.value;
}