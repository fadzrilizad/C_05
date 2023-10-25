/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:27:23 by fizad             #+#    #+#             */
/*   Updated: 2023/08/22 12:32:55 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	fac = 1;
	while (i <= nb)
	{
		fac *= i;
		i++;
	}
	return (fac);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return 0;
}
*/
