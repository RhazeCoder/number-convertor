import PromptSync from "prompt-sync";
const prompt = PromptSync();

const toBinary = (decimal) => {
    let quotient = decimal;
    let remainder = 0;
    let output = "";

    while(quotient > 0) {
        remainder = quotient % 2;
        quotient = Math.floor(quotient / 2);
        output = remainder + output;
    }
    return output;
}

const toOctal = (decimal) => {
    let quotient = decimal;
    let remainder = 0;
    let output = "";

    while(quotient > 0) {
        remainder = quotient % 8;
        quotient = Math.floor(quotient / 8);
        output = remainder + output;
    }
    return output;
}

const toHexadecimal = (decimal) => {
    let hexadecimal = "0123456789ABCDEF";
    let quotient = decimal;
    let remainder = 0;
    let output = "";

    while(quotient > 0) {
        remainder = quotient % 16;
        quotient = Math.floor(quotient / 16);
        output = hexadecimal.charAt(remainder) + output;
    }
    return output;
}
const main = () => {
    do {
        const decimal = prompt("\nEnter a decimal number: ");
        console.log(`Binary: ${toBinary(decimal)}`);
        console.log(`Octal: ${toOctal(decimal)}`);
        console.log(`Hexadecimal: ${toHexadecimal(decimal)}`);
        const repeat = prompt("Do you want to continue? (y/n): ");
        if(repeat !== "y")
        break;
    } while(true);
}

main();