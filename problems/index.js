var isValid = function(s) {
    let result;
    for (let i = 0; i < s.length; i+=2) {
        if (i % 2 == 0 && (
            (s[i] == "(" && s[i+1] == ")") || (s[i] == "{" && s[i+1] == "}") || (s[i] == "[" && s[i+1] == "]"))) {
            result = true;
        } else {
            result = false;
        }
    }
    return result;
};

myVal = isValid('(){}');
console.log(myVal);


// (i % 2 != 0 && i != s.length-1 && (
        //     (s[i] == ")" && s[i-1] != "(") || (s[i] == "}" && s[i-1] != "{") || (s[i] == "]" && s[i-1] != "[")))