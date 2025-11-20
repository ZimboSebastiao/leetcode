/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longestCommonPrefix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 04:15:29 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/20 08:49:55 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    if (strs == NULL || strsSize == 0)
        return ("");

    int i;
    int j;
    char *result;
    result = malloc(strsSize * sizeof(char *) + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (strs[0][i] != '\0')
    {
        j = 1;
        while(j < strsSize)
        {
            if (strs[j][i] == '\0' || strs[j][i] != strs[0][i])
            {
                result[i] = '\0';
                return (result);
            }
            j++;
        }
        result[i] = strs[0][i];
        i++;
    }
    result[i] = '\0';
    return(result);
}
