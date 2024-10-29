/**
 * @param {number} x
 * @return {number}
 */
var reverse = (x) => {
    if (x < 0) return -reverse(-x); 
    const solution = (x + "").split("").reverse().join("");  
    const reversedNumber = Number(solution); 
    return (reversedNumber > 2**31 - 1) ? 0 : reversedNumber;
};