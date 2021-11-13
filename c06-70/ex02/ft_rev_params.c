/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 01:16:49 by ekutlay           #+#    #+#             */
/*   Updated: 2021/11/09 01:29:04 by ekutlay          ###   ########.fr       */
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

	i = argc - 1;
	while (i > 0)
	{
		s = 0;
		while (argv[i][s])
		{
			ft_putchar(argv[i][s]);
			s++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
