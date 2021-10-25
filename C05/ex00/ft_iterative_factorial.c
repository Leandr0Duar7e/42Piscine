/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:11:09 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/21 15:59:13 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (nb != 0)
		{
			res = res * nb;
			nb--;
		}
		return (res);
	}
	return (0);
}
/*
int main(void)
{
	printf("%d\n", ft_iterative_factorial(2));
}
*/
