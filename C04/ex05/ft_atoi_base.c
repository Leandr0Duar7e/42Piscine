/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:20:56 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/21 15:15:26 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	checkinput(char	*base)
{
	int		i;
	int		j;
	char	lst[1000];

	i = 0;
	lst[0] = '+';
	while (base[i] != '\0')
	{
		j = 0;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		else if ((base[i] > 8 && base[i] < 14) || base[i] == 32)
			return (0);
		while (lst[j])
		{
			if (lst[j] == base[i])
				return (0);
			j++;
		}
		lst[j] = base[i];
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (1);
}

int	check0(char s1, char s2, char *base)
{
	int	i;

	i = 0;
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
		while (base[i] != '\0')
		{
			if (s1 == base[i])
				return (i + 1);
			i++;
		}
		return (0);
	}
	return (0);
}

int	makenr(char *st2, int i, char *base, int nbr)
{
	int	nr;
	int	res;

	res = 1;
	nr = 0;
	if (base[0])
	{
		while (check0(st2[i], '1', base))
		{
			nr = nr * 10 - 1 + check0(st2[i], '1', base);
			i++;
		}
		return (nr);
	}
	if (i < 0)
		return (0);
	if (i == 0)
		return (1);
	while (i > 0)
	{
		res = res * nbr;
		i--;
	}
	return (res);
}

int	ft_atoi(char *str, char *base)
{
	int	i;
	int	nr;
	int	sn;

	i = 0;
	sn = 1;
	while (check0(str[i], ' ', base))
		i++;
	while (check0(str[i], '+', base))
	{
		if (str [i] == '-')
			sn = sn * -1;
		i++;
	}
	if (check0(str[i], '1', base))
	{
		nr = makenr(str, i, base, 0);
		return (sn * nr);
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nrb;
	int	bas;
	int	l;
	int	nr10;

	l = 0;
	nr10 = 0;
	bas = 0;
	if (checkinput(base) == 0)
		return (0);
	nrb = ft_atoi(str, base);
	while (base[bas] != '\0')
		bas++;
	while (nrb / 10 != 0)
	{
		nr10 = nr10 + ((nrb % 10) * makenr("", l, "", bas));
		nrb = nrb / 10;
		l++;
	}
	nr10 = nr10 + ((nrb % 10) * makenr("", l, "", bas));
	return (nr10);
}
/*
int main(void)
{
	printf("%d\n", ft_atoi_base("11010110", "01"));
}
*/
