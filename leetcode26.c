int removeDuplicates(int* nums, int numsSize) {
    int k = 0;
    int newsize = numsSize;
    for (int i=0; i<numsSize-1; i++) { 
        if (nums[i] == nums[i+1]) {
            k++;
            newsize--;
        }
        else {
            nums[i+1-k] = nums[i+1];
        }
    }
    return newsize;
}