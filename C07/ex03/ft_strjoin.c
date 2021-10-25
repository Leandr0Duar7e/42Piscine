/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:53:59 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/27 16:19:29 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *strx)
{
	int	l;

	l = 0;
	while (strx[l] != '\0')
		l++;
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	i = 0;
	if (size == 0)
	{
		res = (char *)malloc(sizeof(char));
		if (res == NULL)
			return (0);
		*res = 0;
		return (res);
	}
	res = (char *)malloc((strs[size - 1] - *strs + ft_strlen(strs[size - 1])
				+ ((ft_strlen(sep) - 1) * (size - 1))) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (size > 0)
	{
		while (i < size)
		{
			ft_strcat(res, strs[i]);
			if (i < size - 1)
				ft_strcat(res, sep);
			i++;
		}	
	}
	return (res);
}

int	main(void)
{
	char	*str[3];
	char	*res;

	str[0] = "Primeira";
	str[1] = "Segunda";
	str[2] = "Terceira";
	res = ft_strjoin(3, str, "#####");
	printf("%s\n", res);
}

