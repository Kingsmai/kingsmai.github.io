var hour = new Date;
hour = hour.getHours(); // 获取时间
if(hour >=0 && hour < 6){
    alert("凌晨");
}else if(hour >=6 && hour < 12){
    alert("上午");
}else if(hour >= 12 && hour < 18){
    alert("下午");
}else{
    alert("晚上");
}