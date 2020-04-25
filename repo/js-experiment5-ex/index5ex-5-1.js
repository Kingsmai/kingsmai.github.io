// 现有密码登录页面，点击“提交”后判断输入框里面字段不能为空
function Login() {
    var username = document.getElementById("username").value;
    var password = document.getElementById("password").value;
    var hint = document.getElementById("hint");
    if (username == false && password == false) {
        hint.innerHTML = `用户名和密码不得为空`;
    } else if (username == false) {
        hint.innerHTML = `用户名不得为空`;
    } else if (username == false) {
        hint.innerHTML = `密码不得为空`;
    } else {
        hint.innerHTML = ``;
    }
}