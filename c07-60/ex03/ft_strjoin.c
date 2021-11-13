/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okacmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:31:11 by okacmaz           #+#    #+#             */
/*   Updated: 2021/11/13 19:24:27 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}
/*
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int    main(void)
{
    char *text[8];

    text[0] = "e";
    text[1] = "n";
    text[2] = "e";
    text[3] = "s";
    text[4] = "w";
    text[5] = "o";
    text[6] = "r";
    text[7] = "k";
    printf("%s\n", ft_strjoin(8, text, " - "));
}
*/
