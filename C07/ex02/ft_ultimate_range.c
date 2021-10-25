/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:10:43 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/27 17:29:15 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (-1);
	while (max > min)
	{	
		*(*range + i) = min;
		i++;
		min++;
	}
	return (i);
}
/*
int	main(void)
{
	int	*range;
	int	taille;

	taille = ft_ultimate_range(&range, 2, 90);
	printf("Taille = %d\n", taille);
	if (!range)
	{
		printf("Pointer set to NULL.\n");
		return (0);
	}
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", range[i]);
	}
	return (0);
}
*/
