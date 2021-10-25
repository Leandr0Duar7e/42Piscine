/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:23:40 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/26 17:33:15 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*lst1;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	lst1 = (int *)malloc((max - min) * sizeof(int));
	if (lst1 == NULL)
		return (0);
	while (max > min)
	{
		lst1[i] = min;
		i++;
		min++;
	}
	return (lst1);
}
/*
int	main(void)
{
	int	*ptr1;
	int	i;

	i = 0;
	if (ft_range(13, 10) == NULL)
		printf("NULL\n");
	ptr1 = ft_range(-5, 6);
	while (i < 11)
	{
		printf("%d\n", ptr1[i]);
		i++;
	}
}
*/
