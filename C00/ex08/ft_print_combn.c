/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:22:17 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/12 12:08:22 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nr(int n, int nr[n])
{
	char	c;
	int		i;

	i = 0;
	while (i < n)
	{
		c = '0' + nr[i];
		write(1, &c, 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	nr[9];
	int	i;

	nr[0] = 0;
	i = 0;
	while (i++ < n)
	{
		nr[i] = nr[i - 1] + 1;
	}
	while (nr[n - 1] - nr[0] != n - 1 || nr[n - 1] != 9)
	{
		ft_print_nr(n, nr);
		write(1, ", ", 2);
		i = n - 1;
		while (nr[i] == 10 - n + i)
		{
			i--;
		}
		nr[i]++;
		while (i++ < n)
		{
			nr[i] = nr[i - 1] + 1;
		}
	}
	ft_print_nr(n, nr);
}
