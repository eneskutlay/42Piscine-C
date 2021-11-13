/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:30:26 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/12 17:42:19 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	index;
	int	*arr;

	index = 0;
	arr = malloc((max - min) * sizeof(int));
	if (min >= max)
	{
		return (0);
	}
	while (min + index < max && arr)
	{
		arr[index] = min + index;
		index++;
	}
	return (arr);
}
/*
 #include <stdio.h>

int     *ft_range(int min, int max);

int		main(void)
{
	int i;
	int *tab;
	int min;
	int max;

	min = 0;
	max = 5;
	tab = ft_range(min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
		{
			printf("%d\n", tab[i]);
		}
	}
	else
		printf("err");
}
*/
