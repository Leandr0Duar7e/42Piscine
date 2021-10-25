/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:01:34 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/16 17:31:53 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			return (res);
		}
		i++;
	}
	if (s1[i] != s2[i])
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
	char	wrd2[] = "abO";
	int		r;
	//char	rs;

	//r = ft_strcmp(wrd1, wrd2);
	r = strcmp(wrd1, wrd2);
	//rs = '0' + r;
	//write(1, &rs, 1);
	printf("%d", r);
}
*/
