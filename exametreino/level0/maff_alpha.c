/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:31:58 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/24 11:46:25 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int		i;
	char	lt;

	i = 1;
	while (i < 27)
	{
		if (i % 2 == 1)
		{
			lt = 'a' + i - 1;
			write(1, &lt, 1);
		}
		else
		{
			lt = 'A' + i - 1;
			write(1, &lt, 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
