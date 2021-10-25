/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:00:17 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/15 13:55:04 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	res;

	res = 1;
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
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
	char	wrd1[] = "ads jdfkfnk";
	char	rs;
	int		r;

	r = ft_str_is_lowercase(wrd1);
	rs = '0' + r;
	write(1, &rs, 1);
}
*/
