/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:35:15 by cluis-go          #+#    #+#             */
/*   Updated: 2021/08/09 15:19:54 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_array(int array[], int n)
{
	int	c;

	c = 0;
	while (c < n)
	{
		ft_putchar(array[c] + '0');
		c++;
	}
}

int	ft_get_index(int combn[], int n)
{
	int	c;
	int	max;

	c = 0;
	max = 10 - n;
	while (c < n)
	{
		if (combn[c] == max)
			return (c - 1);
		if (c == (n - 1) && combn[c] < max)
			return (c);
		c++;
		max++;
	}
	return (-1);
}

void	ft_increment(int array[], int n, int index)
{
	int	c;

	c = index + 1;
	array[index]++;
	while (c <= n)
	{
		array[c] = array[c - 1] + 1;
		c++;
	}
}

void	ft_print_combn(int n)
{
	int	combn[10];
	int	c;
	int	pos_index;

	if (n >= 10 || n <= 0)
		return ;
	else
	{
		c = 0;
		while (c < n)
		{
			combn[c] = c;
			c++;
		}
		while (ft_get_index(combn, n) != -1)
		{
			pos_index = ft_get_index(combn, n);
			ft_print_array(combn, n);
			ft_increment(combn, n, pos_index);
			write(1, ", ", 2);
		}
		ft_print_array(combn, n);
	}
}
