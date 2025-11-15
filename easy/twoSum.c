/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twoSum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 03:45:38 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/15 03:55:16 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int i;
    int j;
    int *result = malloc(2 * sizeof(int));
    if (!result)
        return (NULL);
    i = 0;
    while (i < numsSize)
    {
		*returnSize = 2;
        j = i + 1;
        while (j < numsSize)
        {
            if (target == nums[i] + nums[j])
            {
                result[0] = i;
                result[1] = j;
            }
            j++;
        }
        i++;
    }
    return (result);
}

int main(void)
{
	int nums[] = {1, 4, 5, 6, 8, 9};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int target = 10;
	int returnSize;
	int i = 0;
	
	int *result = twoSum(nums, numsSize, target, &returnSize);
	while (i < 2)
	{
		printf("Target: %d\n", result[i]);
		i++;
	}
}