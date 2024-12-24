/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    var n = nums.length
    var expectation = n* (n+1)/2;
    var actualsize = 0;
        for(var i=0;i<n;i++){
            actualsize += nums[i];
        }
        return expectation-actualsize;
};