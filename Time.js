#https://www.facebook.com/permalink.php?story_fbid=623985158490864&id=100026381556272
# suscribed by chandresh joshi
//set interval
setInterval(function()  {
    var date =new Date().toLocaleTimeString();
   var x= document.getElementById('demo');
   x.innerHTML=date ;

},1000 );
//set timeout
setTimeout(function() {
    console.log('code karle bhai')
    
},5000);
