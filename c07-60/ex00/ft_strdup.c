/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:18:27 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/12 17:45:25 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		srclen;
	int		index;
	char	*copy;

	index = 0;
	srclen = ft_strlen(src);
	copy = (char *)malloc(srclen + 1 * sizeof(char));
	if (copy)
	{	
		while (src[index])
		{
			copy[index] = src[index];
			index++;
		}
		copy[index] = '\0';
	}
	return (copy);
}
/*
#include <stdio.h>
int		main(void)
{
	printf("%s\n", ft_strdup("Hello world!"));
	return (0);
}
*/
