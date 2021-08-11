/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:40:44 by cluis-go          #+#    #+#             */
/*   Updated: 2021/08/08 15:39:14 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int number)
{
	int		ten;
	int		unit;

	if (number > 9)
	{
		ten = number / 10 + 48;
		unit = number % 10 + 48;
	}
	else
	{
		ten = '0';
		unit = number + 48;
	}
	ft_putchar(ten);
	ft_putchar(unit);
}

void	ft_print_comb2(void)
{
	int	leftNumber;
	int	rightNumber;

	leftNumber = 0;
	while (leftNumber <= 98)
	{
		rightNumber = leftNumber + 1;
		while (rightNumber <= 99)
		{
			ft_print_number(leftNumber);
			ft_putchar(' ');
			ft_print_number(rightNumber);
			if (leftNumber != 98 || rightNumber != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			rightNumber++;
		}
		leftNumber++;
	}
}
