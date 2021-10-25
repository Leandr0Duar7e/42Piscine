/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:54:26 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/15 19:20:52 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size != 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[j] != '\0')
	{
		j++;
	}
	return (j);
}
/*
int	main(void)
{
	char			wrd1[] = "Hello there, Venus";
	char			wrd2[19];
	unsigned int	rs;
	//int				r;
	
	rs = ft_strlcpy(wrd2, wrd1, 4);
	//r = strlcpy(wrd2, wrd1, 4);
	printf("%s", wrd2);
}
*/
