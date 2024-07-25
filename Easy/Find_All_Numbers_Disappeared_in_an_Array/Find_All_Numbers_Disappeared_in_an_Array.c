int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {

    for(int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }

    *returnSize = 0;
    for(int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            (*returnSize)++;
        }
    }

    int* missingNumbers = (int*)malloc((*returnSize) * sizeof(int));
    int counter = 0;
    for(int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            missingNumbers[counter++] = i + 1;
        }
    }

    return missingNumbers;
}
