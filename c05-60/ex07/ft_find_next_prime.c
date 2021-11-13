/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 05:59:55 by ekutlay           #+#    #+#             */
/*   Updated: 2021/11/09 08:10:37 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	catch;

	catch = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (nb % catch != 0)
	{
		catch++;
	}
	if (catch == nb)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (2);
	}		
	i = nb;
	while (!ft_is_prime(i))
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int ft_find_next_prime(int nb);
int main ()
{
	printf("%d\n", ft_find_next_prime(6));
}
*/
