int missingNumber(int* nums, int numsSize) {
      
        int expectation = numsSize* (numsSize+1)/2;
        int actualsize = 0;
        for(int i=0;i<numsSize;i++){
            actualsize += nums[i];
        }
        return expectation-actualsize;
}