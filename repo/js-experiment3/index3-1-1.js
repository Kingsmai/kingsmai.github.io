// 通过输入框（调用prompt方法）输入购买的某件商品的单价和数量，
// 通过三种方法（window.alert,console.log,document.write）
// 将商品的相关信息和应付款项输出。
var unitPrice = prompt("请输入商品单价"); // 用户输入
var quantity = prompt("请输入数量");
window.alert("商品单价：" + unitPrice + "\n购买数量：" + quantity + "\n应付金额：" + (unitPrice * quantity)); // 输出
console.log("商品单价：" + unitPrice + "\n购买数量：" + quantity + "\n应付金额：" + (unitPrice * quantity));
document.write("商品单价：" + unitPrice + "<br>购买数量：" + quantity + "<br>应付金额：" + (unitPrice * quantity));