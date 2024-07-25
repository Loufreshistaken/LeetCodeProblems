double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int nums3[nums1Size + nums2Size];
    int i, j, temp;
    double median;
    for(i = 0; i < nums1Size; i++){
        nums3[i] = nums1[i];
    }
    for(i = 0; i < nums2Size; i++){
        nums3[nums1Size + i] = nums2[i]; 
    }
    for(i = 0; i < nums1Size + nums2Size - 1; i++){
        for(j = i; j < nums1Size + nums2Size - 1 - i; j++){
            if(nums3[j] > nums3[i]){
                temp = nums3[j];
                nums3[j] = nums3[i];
                nums3[i] = temp;
            }
        }
    }
    if((nums1Size + nums2Size) % 2 == 0)
        median = (double)((nums3[(nums1Size + nums2Size) / 2] + nums3[(nums1Size + nums2Size) / 2 - 1]) / 2.0);
    else
        median = (double)(nums3[(nums1Size + nums2Size - 1) / 2]);
    return median;
}