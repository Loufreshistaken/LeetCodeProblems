int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    (*returnSize) = 2;

    int* array = (int*)malloc((*returnSize * 2) * sizeof(int));

    for(int i = 0; i < numsSize - 1; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                array[0] = i;
                array[1] = j;
                return array;
            }
        }
    }

    return 0;
}