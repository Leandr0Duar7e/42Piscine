/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:06:11 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/27 17:13:44 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int main()
{
	int	i;
	int	res;

	i = -8;
	res = (ABS(i));
	printf("%d\n", res);
	return (0);
}
