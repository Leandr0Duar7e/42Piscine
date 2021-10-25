/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:54:40 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/21 17:51:02 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	a;
	int	d;

	a = 7;
	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (a < nb)
	{
		d = a - 2;
		if (nb % a == 0 || nb % d == 0)
			return (0);
		a += 6;
	}
	return (1);
}

int main(void)
{
	/*int	i;

	i = 1;
	while(i < 100)
	{*/
	printf("%d\n", ft_is_prime(2147483647));
	//	i++;
	//}
}

