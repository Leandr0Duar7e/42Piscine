/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:36:57 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/21 16:18:41 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		res = nb * ft_recursive_factorial(nb - 1);
		return (res);
	}
	return (1);
}
/*
int main(void)
{
	printf("%d\n", ft_recursive_factorial(3));
}
*/
