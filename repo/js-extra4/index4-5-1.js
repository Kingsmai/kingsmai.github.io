// 审查登录信息，正确账号abc，密码123。此外填写提示账号/密码不能为空，账号密码不正确等相关信息。
function Submit(){
    var username = document.getElementById("username");
    var password = document.getElementById("password");
    if (username.value == false || password.value == false){
        if (username.value == false && password.value == false){
            alert("用户名和密码不得为空！");
        } else if (username.value == false) {
            alert("用户名不得为空");
        } else if (password.value == false) {
            alert("密码不得为空");
        }
        return;
    } else if (username.value == "abc" && password.value == "123"){
        alert("欢迎登陆");
    } else {
        alert("用户名或密码错误！");
    }
}