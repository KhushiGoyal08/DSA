let marks = {
    harry: 45,
    shubham: 69,
    Monika: 75
}
for (let i = 0; i < Object.keys(marks).length; i++) {
    console.log("The marks of " + Object.keys(marks)[i] + " are " + marks[Object.keys(marks)[i]]);
}