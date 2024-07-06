let marks = {
    harry: 45,
    shubham: 69,
    Monika: 75
}
for (let i = 0; i < Object.keys(marks).length; i++) {
    console.log("The marks of " + Object.keys(marks)[i] + " are " + marks[Object.keys(marks)[i]]);
}

// OR this can be done using for in loop

for(let key in marks){
    console.log("The marks of "+key +" are "+ marks[key]);
}

// mean of  number

const mean =(a,b,c,d)=>{
    return (a+b+c+d)/4;
}
console.log(mean(4,5,6,7));
// string complete --- template literal and its methods like concat,trim