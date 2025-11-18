/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   romanToInt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 05:11:20 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/18 06:15:19 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int romanToInt(char* s) {
	int roman_values[253] = {0};
	
	roman_values['I'] = 1;
	roman_values['V'] = 5;
	roman_values['X'] = 10;
	roman_values['L'] = 50;
	roman_values['C'] = 100;
	roman_values['D'] = 500;
	roman_values['M'] = 1000;

	int i;
    int sum;
	int length;

	length = strlen(s);
	sum = 0;
	i = 0;
	while (i < length)
	{
		if (i + 1 < length && roman_values[s[i]] < roman_values[s[i + 1]])
		{
			sum += roman_values[s[i + 1]] - roman_values[s[i]];
			i++;
		}
		else
			sum += roman_values[s[i]];
		i++;
	}
  
    return (sum);
}

int main(void)
{
	char *s = "MCMXCIV";
	int result = romanToInt(s);
	printf("%d\n", result);

	return (0);
}