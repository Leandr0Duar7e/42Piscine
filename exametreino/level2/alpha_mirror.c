/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:01:24 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/30 14:04:32 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 'Z' - (av[1][i] - 'A');
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 'z' - (av[1][i] - 'a');
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}