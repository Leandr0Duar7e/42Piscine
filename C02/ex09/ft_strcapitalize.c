/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:00:29 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/15 14:05:47 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char st)
{
	if ((st > 47 && st < 58) || (st > 64 && st < 91) || (st > 96 && st < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	if (str[i] > 96 && str[i] < 123)
	{
		str[i] -= 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91 && check(str[i - 1]) == 1)
		{
			str[i] = str[i] + 32;
		}
		else if (str[i] > 96 && str[i] < 123 && check(str[i - 1]) == 0)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	wrd1[] = "OI,a tuDo bEm?P 4P2PaLAvras quarenta-e-duas; cinquenta+e+um";
	char	*st;

	st = ft_strcapitalize(wrd1);
	write(1, st, 56);
}
*/
