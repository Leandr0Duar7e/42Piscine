/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:15:35 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/24 11:29:56 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		write(1, "a", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
				write(1, "a", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}