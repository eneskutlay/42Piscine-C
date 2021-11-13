/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 22:27:09 by ekutlay           #+#    #+#             */
/*   Updated: 2021/11/06 22:38:29 by ekutlay          ###   ########.fr       */
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
/*
#include <stdio.h>
int ft_is_prime(int nb); //sadece pozitif tam böleneler
int main()
{
	printf("%d\n", ft_is_prime(7));
}
*/
