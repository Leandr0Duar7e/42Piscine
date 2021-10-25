/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:43:05 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/30 10:00:23 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	res;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	if (nb == 2147483647)
		return (1);
	while (1)
	{
		if ((res * res) >= (unsigned int)nb)
			return (res);
		res++;
	}
	return (res);
}

int	ft_is_prime(int nb)
{
	int	a;

	a = 3;
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (a < ft_sqrt(nb))
	{
		if (nb % a == 0)
			return (0);
		a = a + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	if (nb % 2 == 0)
		nb++;
	while (ft_is_prime(nb) == 0)
		nb = nb + 2;
	return (nb);
}
/*
int main(void)
{
	int	i;

	i = 1;
	//while(i < 1000)
	//{
	printf("%d\n", ft_find_next_prime(21474837));
	//	i++;
	//}
}
*/
