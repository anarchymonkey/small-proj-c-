'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the countSwaps function below.
function countSwaps(a) {
var count = 0;
    for(var i = 0 ; i< a.length ;i++)
        {
            for(var j = i+1 ; j<a.length ;j++)
                {
                    if(a[i]>=a[j])
                        {
                            var temp;
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                            count++;
                        }
                    else{
                        if(count<0)
                            {
                                count = 0;
                            }
                    }
                }
        }
        console.log("Array is sorted in "+count +" swaps.");
        console.log("First Element: "+a[0]);
        console.log("Last Element: "+a[a.length-1]);
}

function main() {
    const n = parseInt(readLine(), 10);

    const a = readLine().split(' ').map(aTemp => parseInt(aTemp, 10));

    countSwaps(a);
}
