// Christopher R. Fischer
// 5/4/2019 Leetcode Problem #1
// Addition of Two Sums
#include <stdlib.h>
#include <limits.h>

// O(n^2) solution. This is ugly.
// Works. Submission #226778677
//int* twoSum(int* nums, int numsSize, int target, int* returnSize)
int* hidden__twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int i, j;
	int *result = malloc(sizeof(int) * 2);

	for(i = 0; i < numsSize; i++)
	{
		for(j = 0; j < numsSize; j++)
		{
			// Don't compare the same number!
			if(j==i)
				continue;

			if(nums[i] + nums[j] == target)
			{
				result[0] = i;
				result[1] = j;
                		*returnSize = 2; 
				return result;
			}	
		}

			
	}
    return NULL;
}



