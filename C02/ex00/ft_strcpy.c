/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 21:01:48 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/15 19:14:32 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	wrd1[] = "LegoThisIsEasyhisgfhjiauhiadhbaijsadnjnsa";
	char	wrd2[] = "DoIt";

	//ft_strcpy(wrd1, wrd2);
	strcpy(wrd1, wrd2);
	write (1, wrd1, 10);
}
*/
