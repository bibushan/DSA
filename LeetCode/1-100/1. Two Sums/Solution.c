int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int *element=(int *)malloc(2*sizeof(int));
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i]+nums[j]==target){
                element[0]=i;
                element[1]=j;
                return element;
            }
        }
    }
    return 0;
}
