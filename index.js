var XLSX = require("xlsx");
var workbook =  XLSX.readFile("data/table.xlsx");

let worksheet = workbook.Sheets[workbook.SheetNames[0]];
let worksheet1 = workbook.Sheets[workbook.SheetNames[1]];
let worksheet2 = workbook.Sheets[workbook.SheetNames[2]];
let worksheet3 = workbook.Sheets[workbook.SheetNames[3]];
let worksheet4 = workbook.Sheets[workbook.SheetNames[4]];
let worksheet5 = workbook.Sheets[workbook.SheetNames[5]];
let worksheet6 = workbook.Sheets[workbook.SheetNames[6]];

//Child 1 -- Leaf (Senate hall)
for(let i = 2 ; i < 10 ; i++){
    const nodes =  worksheet['A' + i].v;
    const r =  worksheet['B' + i].v;
    const x =  worksheet['C' + i].v;
    const p =  worksheet['D' + i].v;
    const q =  worksheet['E' + i].v;
    
    var z = Math.sqrt((r * r) + (x * x));

    console.log({
       nodes, z 
    })
}

//Child  2-- Leaf (Residential Area -1)

for(let a = 2 ; a < 14 ; a++){
    const nodes =  worksheet1['A' + a].v;
    const r =  worksheet1['B' + a].v;
    const x =  worksheet1['C' + a].v;
    const p =  worksheet1['D' + a].v;
    const q =  worksheet1['E' + a].v;
    
    var z = Math.sqrt((r * r) + (x * x));
    // console.log("sheet 2");
    console.log({
         nodes,z 
    })
}

//Child  3-- Leaf (H6)

for(let b = 2 ; b < 5 ; b++){
    const nodes =  worksheet2['A' + b].v;
    const r =  worksheet2['B' + b].v;
    const x =  worksheet2['C' + b].v;
    const p =  worksheet2['D' + b].v;
    const q =  worksheet2['E' + b].v;
    
    var z = Math.sqrt((r * r) + (x * x));
    // console.log("sheet 2")
    console.log({
        nodes,z 
    })
}

// Child  4-- Leaf (Library)

for(let a = 2 ; a < 5 ; a++){
    const nodes =  worksheet3['A' + a].v;
    const r =  worksheet3['B' + a].v;
    const x =  worksheet3['C' + a].v;
    const p =  worksheet3['D' + a].v;
    const q =  worksheet3['E' + a].v;
    
    var z = Math.sqrt((r * r) + (x * x));
    // console.log("sheet 2");
    console.log({
        nodes,z 
    })
}

// Child  5-- Leaf (Ground)

for(let a = 2 ; a < 6 ; a++){
    const nodes =  worksheet4['A' + a].v;
    const r =  worksheet4['B' + a].v;
    const x =  worksheet4['C' + a].v;
    const p =  worksheet4['D' + a].v;
    const q =  worksheet4['E' + a].v;
    
    var z = Math.sqrt((r * r) + (x * x));
    // console.log("sheet 2");
    console.log({
        nodes,z 
    })
}

// Child  6-- Leaf (Training and Placement cell)

for(let a = 2 ; a < 3 ; a++){
    const nodes =  worksheet5['A' + a].v;
    const r =  worksheet5['B' + a].v;
    const x =  worksheet5['C' + a].v;
    const p =  worksheet5['D' + a].v;
    const q =  worksheet5['E' + a].v;
    
    var z = Math.sqrt((r * r) + (x * x));
    // console.log("sheet 2");
    console.log({
        nodes,z 
    })
}

// Root-- NIT KKR substation

for(let a = 2 ; a < 3 ; a++){
    const nodes =  worksheet6['A' + a].v;
    const r =  worksheet6['B' + a].v;
    const x =  worksheet6['C' + a].v;
    const p =  worksheet6['D' + a].v;
    const q =  worksheet6['E' + a].v;
    
    var z = Math.sqrt((r * r) + (x * x));
    // console.log("sheet 2");
    console.log({
        nodes,z 
    })
}