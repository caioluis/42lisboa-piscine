/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:28:38 by cluis-go          #+#    #+#             */
/*   Updated: 2021/08/24 09:57:37 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	b;

	b = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		nb = b * ft_recursive_power(nb, power - 1);
	return (nb);
}
