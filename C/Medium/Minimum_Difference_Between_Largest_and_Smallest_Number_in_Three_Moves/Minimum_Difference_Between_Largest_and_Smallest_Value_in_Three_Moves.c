#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int minDifference(int* nums, int numsSize) {
    if (numsSize <= 4) {
        return 0;
    }

    qsort(nums, numsSize, sizeof(int), compare);

    int minDiff = nums[numsSize-1] - nums[3];    
    if (nums[numsSize-2] - nums[2] < minDiff) {
        minDiff = nums[numsSize-2] - nums[2];    
    }
    if (nums[numsSize-3] - nums[1] < minDiff) {
        minDiff = nums[numsSize-3] - nums[1];    
    }
    if (nums[numsSize-4] - nums[0] < minDiff) {
        minDiff = nums[numsSize-4] - nums[0];    
    }

    return minDiff;
}