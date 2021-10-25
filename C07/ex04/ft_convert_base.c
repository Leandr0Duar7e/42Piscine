/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:56:02 by leolivei          #+#    #+#             */
/*   Updated: 2021/09/29 18:19:50 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_checkbase(char *base)
{
	int	i;
	int	j;
	int	bl;

	j = 0;
	i = 0;
	bl = ft_strlen(base);
	if (base = 0 || bl <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if ((base[i] > 8 && base[i] < 14) || base[i] == 32
			|| base[i] == '-' || base[i] == '+')
			return (0);
		while (j < bl)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb, char *nr)
{
	char	lt;

	if (nb == -2147483648)
	{
		ft_putnbr(-214748364, nr);
		nr[strlen(nr)] = '8';
	}
	else if (nb < 0)
	{
		nr[0] = '-';
		ft_putnbr(-nb, nr);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10, nr);
		lt = '0' + nb % 10;
		nr[strlen(nr)] = lt;	
	}
	return (nr);
}

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power > 0)
	{
		res = ft_recursive_power(nb, power - 1);
		return (nb * res);
	}
	return (1);
}

int	ft_checkind(char lt, char *b)
{
	int	i;

	i = 0;
	while(lt != b[i])
		i++;
	return(i);
}

void	ft_nbrtodec(char nr1, char base1, char *res1)
{
	int 	len;
	int		dec;
	int		i;
	int		bas1;
	
	bas1 = strlen(base1)
	i = 0;
	dec = 0;
	len = strlen(nr1) - 1;
	while (len >= 0)
	{
		dec += ft_checkind(nr1[len]) * ft_recursive_power(bas1, i);
		i++;
		len--:
	}
	//res1 = ft_putnbr(dec, "");
	return (dec);
}

char	*ft_dectoret(int nr2, char base2)
{

}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		sgn;
	int		i;
	char	*res;

	i = 0;
	sgn = 1;
	if (ft_checkbase(base_from) == 0 || ft_checkbase(base_to) == 0)
		return (0);
	while ((nbr[i] > 8 && nbr[i] < 14) || nbr[i] == 32)
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] = '-' )
			sgn = -sgn;
		i++;
	}
	*nbr = *(*nbr + i);
	if (sgn == -1)
		res[0] = '-';
	res = ft_dectoret(ft_nbrtodec(nbr, base_from, res), base_to);
	res = malloc(sizeof(*res) * ft_strlen(res));
	if (res == NULL)
		return (0);
	
	return(res);
}	
