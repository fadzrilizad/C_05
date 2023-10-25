/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:22:55 by fizad             #+#    #+#             */
/*   Updated: 2023/08/22 14:46:13 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	next_prime(int n)
{
	int	i;

	i = 2;
	while (i <= (n / i))
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	n = nb;
	if (nb <= 2)
		return (2);
	while (!next_prime(n))
		n++;
	return (n);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_find_next_prime(14));	
	return (0);
}
*/
