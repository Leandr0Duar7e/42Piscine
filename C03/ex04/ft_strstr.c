/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:26:42 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/17 13:13:51 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	checkcmp(char *s1, char *s2, int in)
{
	int	j;

	j = 0;
	while (s1[in] == s2[j] && s2[j] != '\0')
	{
		in++;
		j++;
	}
	return (s2[j] == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	pt;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			pt = i;
			if (checkcmp(str, to_find, i))
			{
				str = str + pt;
				return (str);
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	wrd1[50] = "isto es muito estranho";
	char	wrd2[50] = "est";

	printf("%s", ft_strstr(wrd1, wrd2));
	//printf("%s", strstr(wrd1, wrd2));
}
*/
