/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:55:38 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/15 13:51:26 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	res;

	res = 1;
	while (*str != '\0')
	{
		if (*str <= 64 || 123 <= *str || (*str > 90 && *str < 97))
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
	char	wrd1[] = "jdha Adds";
	char	rs;
	int		r;

	r = ft_str_is_alpha(wrd1);
	rs = '0' + r;
	write(1, &rs, 1);
}
*/
