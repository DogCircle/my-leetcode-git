#include <stdio.h>
#include <stdlib.h>

#include "includes.h"

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int i, j;
    int *returnArray = malloc(sizeof(int) * 2);
    
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                returnArray[0] = i;
                returnArray[1] = j;
                *returnSize = 2;
            }
        }
    }
    
    return returnArray;
}
void func1(void)
{
    int returnSize;
    int *returnArray;
    
    {
        int nums[] = { 2, 7, 11, 15 };
        
        returnArray = twoSum(nums, 4, 9, &returnSize);
        printf("%d %d\n", returnArray[0], returnArray[1]);
        free(returnArray);
    }
    
    {
        int nums[] = { 3, 2, 4 };
        
        returnArray = twoSum(nums, 3, 6, &returnSize);
        printf("%d %d\n", returnArray[0], returnArray[1]);
        free(returnArray);
    }
    
    {
        int nums[] = { 3, 3 };
        
        returnArray = twoSum(nums, 2, 6, &returnSize);
        printf("%d %d\n", returnArray[0], returnArray[1]);
        free(returnArray);
    }
}
