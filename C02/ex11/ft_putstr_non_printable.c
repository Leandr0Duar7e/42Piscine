/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:46:52 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/18 14:57:23 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	makelst(char *lstn)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i <= 9)
		{
			lstn[i] = '0' + i;
		}
		else
		{
			lstn[i] = 'a' + i - 10;
		}
		i++;
	}
	return (*lstn);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	lst[16];

	makelst(lst);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			if (str[i] < 0)
			{
				str[i] = str[i] + 256;
			}
			write(1, "\\", 1);
			write(1, &lst[str[i] / 16], 1);
			write(1, &lst[str[i] % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	wrd1[] = "Oi\nvoce§ es±ta be\"m?";

	ft_putstr_non_printable(wrd1);
}
*/
