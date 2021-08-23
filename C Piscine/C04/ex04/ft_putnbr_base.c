/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:58:48 by cluis-go          #+#    #+#             */
/*   Updated: 2021/08/23 11:20:01 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	else
	{
		while (base[i] != '\0')
		{
			if (base[i] == '+' || base[i] == '-')
				return (0);
			j = 0;
			while (base[j] != '\0')
			{
				if (base[i] == base[j] && i != j)
					return (0);
				j++;
			}
			i++;
		}
	}
	return (1);
}

void	convert(int nbr, char *base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= ft_strlen(base))
	{
		convert(nbr / ft_strlen(base), base);
		convert(nbr % ft_strlen(base), base);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_base(base))
	{
		convert(nbr, base);
	}
}
