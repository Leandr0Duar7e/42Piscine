/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:42:17 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/15 13:52:56 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	res;

	res = 1;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
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
	char	wrd1[] = "8398 94";
	char	rs;
	int		r;

	r = ft_str_is_numeric(wrd1);
	rs = '0' + r;
	write(1, &rs, 1);
}
*/
