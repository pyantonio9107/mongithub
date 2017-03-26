/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfemenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 00:08:52 by pfemenia          #+#    #+#             */
/*   Updated: 2017/03/26 15:43:37 by pfemenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return(0);
	while (i <= nb /i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	   nb++;
	return (nb);
}

int main()
{
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(2147483645));
	return(0);
}
