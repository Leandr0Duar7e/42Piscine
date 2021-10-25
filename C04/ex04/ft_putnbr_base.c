/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:07:30 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/25 18:42:11 by leolivei         ###   ########.fr       */
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

void	print_num(int nr, int bas, char *base)
{
	if (nr == -2147483648)
	{
		print_num(1073741824, bas, base);
		write(1, &base[8 % bas], 1);
	}
	else if (nr / bas == 0)
		write(1, &base[nr % bas], 1);
	else
	{
		print_num(nr / bas, bas, base);
		write(1, &base[nr % bas], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;

	i = 0;
	if (checkinput(base) == 0)
		return ;
	else
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			if (nbr != -2147483648)
				nbr = -nbr;
		}
		while (base[i] != '\0')
			i++;
		print_num(nbr, i, base);
	}
}

int	main(void)
{
		ft_putnbr_base(-2147483648, "01");
}

