int findClosestNumber(int* nums, int numsSize) {
    int min, returnValue;
    min = abs(nums[0]);
    returnValue = nums[0];
    for(int i = 1; i < numsSize; i++){
        if(abs(nums[i]) < min){
            min = abs(nums[i]);
            returnValue = nums[i];
        }
        else if(abs(nums[i]) == min){
            if(nums[i] > returnValue) returnValue = nums[i];
        }
    }
    return returnValue;
}