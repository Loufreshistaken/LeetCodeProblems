int removeDuplicates(int* nums, int numsSize) {
    int counter = 0;
    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] != nums[i + 1]) nums[counter++] = nums[i];
    }
    nums[counter] = nums[numsSize - 1];
    return counter + 1;
}