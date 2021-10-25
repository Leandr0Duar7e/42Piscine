/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:07:17 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/21 16:29:21 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power > 0)
	{
		res = ft_recursive_power(nb, power - 1);
		return (nb * res);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(-6, -9));
}
*/
