/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 22:07:29 by ekutlay           #+#    #+#             */
/*   Updated: 2021/11/06 22:22:27 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while (i * i < nb && i <= 46340)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
int ft_sqrt(int nb);
int main(void)
{
	printf("%d\n", ft_sqrt(81));
}
*/
