/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isPalindrome.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 04:29:16 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/17 05:07:01 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

bool isPalindrome(int x) {

    int i;
    int invert;

    i = x;
    invert = 0;
	if (x < 0)
		return (false);
    while (i > 0)
    {
		int last = i % 10;

		if (invert >= INT_MAX / 10 || (invert == INT_MAX && last > 7))
			return (false);

        invert = invert * 10 + last;
        i = i / 10;
    }
    if (invert == x)
        return (true);
    else
        return (false); 
}

int main(void)
{
	int result = isPalindrome(2147483647);
	printf("%d\n",result);
	return (0);
}