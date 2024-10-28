/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let j = 1; // Initialize the count of unique elements to 1
    for (let i = 1; i < nums.length; i++) {
        if (nums[i] !== nums[j - 1]) {
            nums[j] = nums[i]; // Overwrite the next unique element
            j++;
        }
    }
    return j;
};