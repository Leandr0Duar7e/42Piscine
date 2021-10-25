/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:33:27 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/18 13:22:54 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			return (res);
		}
		i++;
	}
	if (i < n && s1[i] != s2[i])
	{
		res = s1[i] - s2[i];
		return (res);
	}
	return (res);
}
/*
int	main(void)
{
	char	wrd1[] = "abc";
	char	wrd2[] = "abc\0efk";
	int		r;

	r = ft_strncmp(wrd1, wrd2, 8);
	//r = strncmp(wrd1, wrd2, 8);
	printf("%d", r);
}
*/
