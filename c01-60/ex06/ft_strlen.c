/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:44:00 by ekutlay           #+#    #+#             */
/*   Updated: 2021/10/30 21:22:25 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '/0')
	{
		counter++;
	}
	return (counter);
}