/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:58:48 by cluis-go          #+#    #+#             */
/*   Updated: 2021/08/19 12:16:40 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] != '\0' || base[1] != '\0')
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

void	convert()

