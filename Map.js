#https://www.facebook.com/permalink.php?story_fbid=623985158490864&id=100026381556272
# suscribed by chandresh joshi
var number=[100,200,300,400]
var mappednums=number.map(function(val,index){
val=val+50;
return val;
})
console.log("berfore mapping",number)
console.log("after mapping",mappednums)
var mp=number.map((val=>val+50));
console.log(mp)

    

