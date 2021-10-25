/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:30:03 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/21 13:13:52 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	nr;

	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nr = '0' + nb % 10;
		write(1, &nr, 1);
	}
	else
	{
		nr = '0' + nb;
		write(1, &nr, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(214748360);
}
*/
