/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:24:21 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/15 19:15:57 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	wrd1[] = "LegoThisIsEasyhisgfhjiauhiadhbaijsadnjnsa";
	char	wrd2[] = "DoIt";

	ft_strncpy(wrd1, wrd2, 2);
	//strncpy(wrd1, wrd2, 2);
	write (1, wrd1, 10);
}
*/
