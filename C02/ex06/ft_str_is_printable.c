/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:38:07 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/15 14:00:16 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	res;

	res = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
		{
			res = 0;
			return (res);
		}
		str++;
	}
	return (res);
}
/*
int	main(void)
{
	char	wrd1[] = "\n ";
	char	rs;
	int		r;

	r = ft_str_is_printable(wrd1);
	rs = '0' + r;
	write(1, &rs, 1);
}
*/
