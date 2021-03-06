/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:25:16 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/11 17:08:00 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	nr[3];

	nr[0] = '0';
	while (nr[0] <= '9' )
	{
		nr[1] = nr[0] + 1;
		while (nr[1] <= '8')
		{
			nr[2] = nr[1] + 1;
			while (nr[2] <= '9')
			{
				if (nr[0] == '7' && nr[1] == '8' && nr[2] == '9')
				{
					write(1, &nr, 3);
					nr[1] = '9';
					break ;
				}
				write(1, &nr, 3);
				write(1, ", ", 2);
				nr[2]++;
			}
			nr[1]++;
		}
		nr[0]++;
	}
}
