// 数组temp = [ 'a', 'bas', 'ds', '4', 'dfg', 'sssd', 'sssd', 'yas', 'DNS', 'FPS' ];
// 要求从window获取一个整数tempA，，将数组temp 中第 tempA(从 0 开始算 ) 个元素取出来放到数组的开头显示。
var temp = ['a', 'bas', 'ds', '4', 'dfg', 'sssd', 'sssd', 'yas', 'DNS', 'FPS'];
document.body.innerHTML += `Base Array: ${temp} <br>`;
// 随机获取一个整数，因为不确定 temp 数组的长度，所以取随机值的时候，就乘以 temp 长度，确保取值范围在 temp 里
// splice 函数会返回被删除的数组，所以将返回值返回在临时变量 tmp 
// 删除 temp 数组的随机一个元素
var tmp = temp.splice(Math.floor(Math.random() * (temp.length)), 1);
// concat 函数将两段数组结合起来，并赋值给 temp 对象
// 这里意思是：被取出来的元素，链接原数组，实现将被取出来的元素移到数组的开头
temp = tmp.concat(temp);
document.body.innerHTML += `After replace: ${temp} <br>`;