const newProblem = (yourNumber, yourObject) => {
    console.log("You entered number: ", yourNumber);
    let userValue = '';
    const userString = String(yourNumber);

    // Converting numbers to the desired alphabets 
    for (let i = 0; i < userString.length ; i++) {
        for (const value in yourObject) {
            if (userString[i] == value ) {
                userValue += yourObject[value]; 
            }
        }
    }
    console.log("The entered number in alphabets is: ", userValue);

    // Telling the computer about alphabet sorting
    const alphabets = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'];
    const newArr = [];
    for (let i = 0; i < userValue.length; i++) {
        for (let j = 0; j < alphabets.length; j++) {
            if (userValue[i] === alphabets[j]) {
                newArr.push(j);
            }
        }
    }

    // console.log("Array of alphabet indexes: ",newArr);
    // sorting the indexes
    for (let i = 0; i < newArr.length; i++) {
        for (let j = 0; j < newArr.length; j++) {
            let tempValue;
            if (newArr[i] < [newArr[j]]) {
                tempValue = newArr[i];
                newArr[i] = newArr[j];
                newArr[j] = tempValue
            }
        }
    }


    // console.log("Sorted array of indexes: ",newArr);

    // sorting the alphabets
    let finalValue = '';
    for (let i = 0; i < newArr.length; i++) {
        finalValue += alphabets[newArr[i]]
    };
    console.log("final sorted alphabets", finalValue);


    // getting final number
    let finalNumber = '';
    for (let i = 0; i < finalValue.length; i++) {
        for (const objvalue in yourObject) {
            if (finalValue[i] === yourObject[objvalue]) {
                finalNumber += String(objvalue)
            }
        }
    }
    let toBeReturned = Number(finalNumber);
    console.log("Your final number is: ", toBeReturned);

    return toBeReturned;
}


const userObj = { 1 : 'k', 2 : 'z', 3 : 'c', 4 : 'm', 5 : 'a', 6 : 'f', 7 : 'b', 8 : 'y', 9 : 'g', 0 : 'j' };
newProblem(51739, userObj);
