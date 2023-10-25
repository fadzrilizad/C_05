/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:16:30 by fizad             #+#    #+#             */
/*   Updated: 2023/08/22 14:25:44 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	squared(int r)
{
	return (r * r);
}

int	ft_sqrt(int nb)
{
	int	r;

	r = 1;
	if (nb == 1)
		return (1);
	while (r <= 46341 && r <= (nb / 2))
	{
		if (squared(r) == nb)
			return ((int)r);
		r++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_sqrt(-2058));
	return (0);
}
*/
