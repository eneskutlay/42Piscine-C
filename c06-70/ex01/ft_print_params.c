/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 23:03:29 by ekutlay           #+#    #+#             */
/*   Updated: 2021/11/09 00:32:10 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	s;

	i = 1;
	if (argc > 0)
	{
		while (i < argc)
		{
			s = 0;
			while (argv[i][s] != '\0')
			{
				ft_putchar(argv[i][s]);
				s++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
