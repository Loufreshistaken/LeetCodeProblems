int searchInsert(int* nums, int numsSize, int target) {
    int return_value;
    if(target > nums[numsSize - 1]) return_value = numsSize;
    else if(target == nums[numsSize - 1]) return_value = numsSize - 1;
    if(target <= nums[0]) return_value = 0;

    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] == target) return_value = i;
        else if(target > nums[i] && target < nums[i + 1]) return_value = (i + 1);
    }
    return return_value;
}