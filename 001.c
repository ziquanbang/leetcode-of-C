int* twoSum(int* nums, int numsSize, int target) {
    int *res;
    res = (int*)malloc(2*sizeof(int));
    bool flag = false;
    for(int i=0;i<numsSize-1;i++){
        res[0]=i;
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                res[1]=j;
                 flag = true;
                break;
               
            }
        }
        if(flag)
            break;
    }
    return res;
}
