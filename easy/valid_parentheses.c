/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_parentheses.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 07:33:23 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/20 08:49:16 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char* s) {
    if (s == NULL || strlen(s) == 0)
        return (true);

    int count = strlen(s);
    char *stack = malloc(count * sizeof(char));
    int top = -1;
    int i;

    i = 0;
    while (s[i] != '\0')
    {
       if (s[i] == '(' || s[i] == '[' || s[i] == '{')
       {
            stack[++top] = s[i];
       }
       else 
       {
            if(top == -1)
            {
                free(stack);
                return (false);
            }
            char topChar = stack[top--];
            if ((s[i] == ')' && topChar != '(') ||
                (s[i] == ']' && topChar != '[') ||
                (s[i] == '}' && topChar != '{'))
            {
                free(stack);
                return false;
            }
       }
        i++;
    }
        bool result = (top == -1);
        free(stack);
        return (result);
}
int main (void)
{
	char *s = "([)]";
	printf("main %d\n", isValid(s));
	return (0);
}