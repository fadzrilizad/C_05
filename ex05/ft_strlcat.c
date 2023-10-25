/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:30:02 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 17:14:43 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	j = ft_strlen(dest);
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size == 0 || size <= j)
		return (s + size);
	while (src [i] != '\0' && i < size - j - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (d + s);
}

/*
#include <stdio.h>

int main()
{
	char dest[200] = "totob";
	char src[100] = "bla";

	unsigned int result = ft_strlcat(dest, src, 100);
	printf("%u ", result);
	printf("%s\n", dest);

    return 0;
}
*/
