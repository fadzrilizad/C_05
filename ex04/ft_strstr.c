/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:26:30 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 17:14:02 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    char *str = "Hello, world! This is a test.";
    char *to_find = "world";

    char *result = ft_strstr(str, to_find);
    int index = result - str;
    if (index)
    {
        printf("Substring found at index %d \n", index);
    }
    else
    {
        printf("Substring not found\n");
    }
}
*/
