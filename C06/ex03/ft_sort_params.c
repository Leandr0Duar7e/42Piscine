/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:59:54 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/21 20:45:10 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printarg(char *arg)
{
	int	j;

	j = 0;
	while (arg[j] != '\0')
	{
		write(1, &arg[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			return (res);
		}
		i++;
	}
	if (s1[i] != s2[i])
	{
		res = s1[i] - s2[i];
		return (res);
	}
	return (res);
}

void	change(char **arg1, char **arg2)
{
	char	*tab;

	tab = *arg1;
	*arg1 = *arg2;
	*arg2 = tab;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 2;
	j = 1;
	while (j < argc)
	{
		while (i < argc)
		{
			if (ft_strcmp(argv[j], argv[i]) > 0)
				change(&argv[i], &argv[j]);
			i++;
		}
		j++;
		i = j + 1;
	}
	j = 1;
	while (j < argc)
	{
		printarg(argv[j]);
		j++;
	}
}
