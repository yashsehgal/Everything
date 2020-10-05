#https://www.facebook.com/permalink.php?story_fbid=623985158490864&id=100026381556272
# suscribed by chandresh joshi
// Anonymous function
// function (){
//     alert("no name function")
// }
// named function
// function name(){
//     alert("name function")
// } 
// name();
//function expression
// var test= function (){
//         alert("no name function")
//     }
//     test();

//immediate invoke function
// (function(){
//     console.log('immediate invoke function')
// })
// ();
//function closure
function outer(){
    var out='hello in a outer function';
    document.write(out+'<br/>')
    function inner(){
        var inn="in a inner function"
        document.write(inn+'<br/>')
    }
    return inner()
}
//Parameter in function
outer()
function add(n1,n2){
    console.log("the sum is :",n1+n2)
}
add(10,20)
