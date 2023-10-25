/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:05:59 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 17:11:14 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_strncmp("Hello1", "Hello word", 6));
    printf("%d\n", ft_strncmp("Hello ", "Hello1word", 6));
    printf("%d\n", ft_strncmp("Hello ", "Hello word", 6));
}
*/
