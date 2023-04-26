
var XLSX = require("xlsx");
var workbook =  XLSX.readFile("data/voltageError.xlsx");

let worksheet = workbook.Sheets[workbook.SheetNames[0]];

for(let i = 2; i< 34 ; i++){
    const nodes =  worksheet['A' + i].v;
    const v1r=  worksheet['C' + i].v;
    const v1i =  worksheet['D' + i].v;
    const v2r=  worksheet['E' + i].v;
    const v2i =  worksheet['F' + i].v;

    let v1 = Math.sqrt((v1r*v1r) + (v1i*v1i));
    let v2 = Math.sqrt((v2r*v2r) + (v2i*v2i));
let error = ((v1 - v2)/v1)*100;
// console.log(error);

// console.log("The percentage error in " + nodes + " is: " + error +" %");
console.log(error +" %");

}