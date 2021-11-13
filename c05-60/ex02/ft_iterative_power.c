/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:44:48 by ekutlay           #+#    #+#             */
/*   Updated: 2021/11/08 20:53:23 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i <= power)
	{
		nb *= n;
	}
	return (nb);
}
/*
#include <stdio.h>
int		ft_iterative_power(int nb, int power);
int		main(void)
{
	int		nb;
	int		power;
	nb = 2;
	power = 3;
	printf("%d\n", ft_iterative_power(nb, power));
}
*/
