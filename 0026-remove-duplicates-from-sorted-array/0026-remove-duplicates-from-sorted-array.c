int removeDuplicates(int* nums, int numsSize) {
    int temp[numsSize]; 
    int k = 0;      

    for (int i = 0; i < numsSize; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (nums[i] == temp[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            temp[k++] = nums[i];
        }
    }
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
  return k; 
}
