// 创建一个Lala水果店的商品列表（包括水果名称、单价、介绍、以及购买数量，购买数量为输入），
// 当用户点击提交的时候，会显示一张购物清单的文本信息文本信息，例如下图。最终价格四舍五入。
function Buy() {
    var qtyInput = document.getElementsByName('qty');
    var itemName = new Array();
    var itemPrice = new Array();    // 记录单价
    var total = 0;
    document.body.insertAdjacentHTML("beforeend", `<br>购物清单`);
    for (let i = 0; i < qtyInput.length; i++) {
        itemName[i] = qtyInput[i].parentElement.parentElement.children[0].innerHTML
        itemPrice[i] = parseFloat(qtyInput[i].parentElement.parentElement.children[1].innerHTML);
        if (Number(qtyInput[i].value) != 0) {
            document.body.insertAdjacentHTML("beforeend", `<br>${itemName[i]}: ${itemPrice[i]} * ${qtyInput[i].value}`);
            total += ((Number(qtyInput[i].value)) * itemPrice[i]);
        }
    }
    total = Math.round(total);  // 四舍五入
    document.body.insertAdjacentHTML("beforeend", `<br>一共消费: ${total}元`);
}

/**
 * TODO 功能项
 * 计算价格
 * 当数量为0，不输出
 * 输出格式：产品，单价，数量
 */