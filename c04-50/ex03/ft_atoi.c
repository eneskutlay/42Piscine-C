/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:15:06 by ekutlay           #+#    #+#             */
/*   Updated: 2021/11/05 13:39:10 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		neg;
	int		val;

	i = 0;
	neg = 0;
	val = 0;
	while ((str[i] != '\0') && (str[i] < 48 || str[i] > 57))
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		val = val * 10 + str[i] - 48;
		i++;
	}
	if (neg % 2 == 1)
		return (val * -1);
	return (val);
}
/*
#include <stdio.h>
int		main(void)
{
	char	*str;
	str = "   ---+--+1234ab567";
	printf("%d \n", ft_atoi(str));
	return (0);
}
*/
