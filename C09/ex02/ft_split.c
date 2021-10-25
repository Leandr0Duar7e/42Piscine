/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:04:15 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/28 19:49:07 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src, int j3, int i3)
{
	int	k;

	k = 0;
	while (j3 != i3)
	{
		dest[k] = src[j3];
		j3++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strdup(char *src, int j2, int i2)
{
	char	*ptr;

	ptr = (char *)malloc((i2 - j2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strcpy(ptr, src, j2, i2);
	return (ptr);
}

int	ft_is_sep(char lt, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (lt == sep[i])
			return (1);
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**ssplit;
	int		i;
	int		j;
	int		si;

	i = 0;
	si = 0;
	ssplit = malloc(sizeof(*ssplit) * (ft_strlen(str) + 1));
	if (ssplit == NULL)
		return (0);
	while (str[i] != '\0')
	{
		while (ft_is_sep(str[i], charset))
			i++;
		j = i;
		while (ft_is_sep(str[i], charset) == 0 && str[i] != '\0')
			i++;
		if (ft_is_sep(str[i - 1], charset) == 0)
		{
			*(ssplit + si) = ft_strdup(str, j, i);
			si++;
		}
	}
	*(ssplit + si) = 0;
	return (ssplit);
}
/*
int main(void)
{
	char	**str;
	int		i;

	i = 0;
	str = ft_split("dksj989idjbfj989sf9", "0123456789");
	while(i <= 3)
	{
		printf("%s\n", str[i]);
		i++;
	}
}
*/
