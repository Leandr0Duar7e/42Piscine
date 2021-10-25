/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:02:56 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/13 19:15:11 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tab2[2];
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j < size)
	{
		while (i < size)
		{
			if (*(tab + i) < *(tab + j))
			{
				tab2[0] = *(tab + j);
				tab2[1] = *(tab + i);
				*(tab + j) = tab2[1];
				*(tab + i) = tab2[0];
			}
			i++;
		}
		j++;
		i = j + 1;
	}
}
