/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:02:07 by cluis-go          #+#    #+#             */
/*   Updated: 2021/08/05 15:02:30 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	indicator;

	if (n < 0)
	{
		indicator = 'N';
	}
	else
	{
		indicator = 'P';
	}
	write(1, &indicator, 1);
}
