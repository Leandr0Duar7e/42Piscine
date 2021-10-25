/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:38:31 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/21 17:46:57 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	while (res * res <= nb && res <= nb)
	{
		if ((res * res) == nb)
			return (res);
		res++;
	}
	return (0);
}
/*
int main(void)
{
	int	i;

	i = -2;
	while(i < 10000000)
	{
		if(ft_sqrt(i) != 0)
			printf("%d\n", ft_sqrt(i));
		i++;
	}
}
*/
