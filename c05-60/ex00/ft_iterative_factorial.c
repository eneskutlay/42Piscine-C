/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:43:32 by ekutlay           #+#    #+#             */
/*   Updated: 2021/11/06 19:05:01 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		while (i != '\0')
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
}
/*
#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	printf("%d\n", ft_iterative_factorial('a'));
}
*/
