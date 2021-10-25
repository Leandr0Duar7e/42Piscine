/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:18:01 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/20 13:03:13 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	check0(char s1, char s2)
{
	if (s2 == ' ')
	{
		if ((s1 > 8 && s1 < 14) || s1 == 32)
			return (1);
	}
	if (s2 == '+')
	{
		if (s1 == '-' || s1 == '+')
			return (1);
	}
	if (s2 == '1')
	{
		if (s1 > 47 && s1 < 58)
			return (1);
	}
	return (0);
}

int	makenr(char *st2, int i)
{
	int	nr;

	nr = 0;
	while (st2[i] > 47 && st2[i] < 58)
	{	
		nr = nr * 10 + (st2[i] - 48);
		i++;
	}
	return (nr);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nr;
	int	sn;

	i = 0;
	sn = 1;
	while (check0(str[i], ' '))
		i++;
	while (check0(str[i], '+'))
	{
		if (str [i] == '-')
			sn = sn * -1;
		i++;
	}
	if (check0(str[i], '1'))
	{
		nr = makenr(str, i);
		return (sn * nr);
	}
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_atoi("---214748-3640"));
	//printf("%d", atoi("  12340045"));
}
*/
