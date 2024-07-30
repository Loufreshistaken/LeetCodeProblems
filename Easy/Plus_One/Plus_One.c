int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = digitsSize - 1;
    int j;
    (*returnSize) = digitsSize;
    while(i >= 0 && digits[i] == 9){
        digits[i] = 0;
        i--;
    }
    if(i == -1) (*returnSize) += 1;
    else{
        digits[i] += 1;
    }

    int* returnArray = (int*)malloc(sizeof(int) * (*returnSize));
    if(i == -1){
        returnArray[0] = 1;
        for(j = 1; j < (*returnSize); j++){
            returnArray[j] = 0;
        }
    }
    else{
        for(j = 0; j < (*returnSize); j++){
            returnArray[j] = digits[j];
        }
    }
    return returnArray;
}