/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfemenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 12:00:55 by pfemenia          #+#    #+#             */
/*   Updated: 2017/03/25 15:01:36 by pfemenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int a;

	a = 1;
	if (power < 0)
		return (0);
	if (power == 1)
		return (1);
	while (power)
	{
		a = a * nb;
		power--;
	}
	return (a);
}
