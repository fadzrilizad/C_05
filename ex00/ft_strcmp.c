/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:51:51 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 17:10:23 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_strcmp("Hello0", "Hello1"));
    printf("%d\n", ft_strcmp("Hello2", "Hello1"));
    printf("%d\n", ft_strcmp("Hello", "Hello"));
	return (0);
}
*/
