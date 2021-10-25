/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:11:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/11 20:05:23 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	nr[2];

	nr[0] = 0;
	while (nr[0] <= 98)
	{
		nr[1] = nr[0] + 1;
		while (nr[1] <= 99 )
		{
			ft_putchar('0' + nr[0] / 10);
			ft_putchar('0' + nr[0] % 10);
			write(1, " ", 1);
			ft_putchar('0' + nr[1] / 10);
			ft_putchar('0' + nr[1] % 10);
			if (nr[0] == 98 && nr[1] == 99 )
			{
				break ;
			}
			write(1, ", ", 2);
			nr[1]++;
		}
		nr[0]++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
