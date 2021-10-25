/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:13:17 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/15 13:56:45 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	res;

	res = 1;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
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
	char	wrd1[] = "HJS;ASKJ";
	char	rs;
	int		r;

	r = ft_str_is_uppercase(wrd1);
	rs = '0' + r;
	write(1, &rs, 1);
}
*/
