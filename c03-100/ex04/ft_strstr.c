/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:22:55 by ekutlay           #+#    #+#             */
/*   Updated: 2021/11/12 18:37:27 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	s;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		s = 0;
		while (str[i + s] == to_find[s] && str[i + s] != '\0')
		{
			if (to_find[s + 1] == '\0')
				return (&str[i]);
			s++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
char *ft_strstr(char *str, char *to_find);
int		main(void)
{
	char str[] = "enes";
	char to_find[] = "n";
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
*/
