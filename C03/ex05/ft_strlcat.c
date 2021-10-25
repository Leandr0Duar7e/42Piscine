/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:42:47 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/19 11:42:25 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while ((i + j + 1 < size) && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	return (i + j);
}

int	main (void)
{
	char	wrd1[] = "abc def";
	char	wrd2[] = "123";
	unsigned int a;
	unsigned int b;

	a = 10;
	b = ft_strlcat(wrd1, wrd2, 10);
	//b = strlcat(wrd1, wrd2, 10);
	printf("%d", b);
}

