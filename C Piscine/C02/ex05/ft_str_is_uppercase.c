/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:22:21 by cluis-go          #+#    #+#             */
/*   Updated: 2021/08/12 14:28:53 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	value;

	i = 0;
	value = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			value = 0;
		i++;
	}
	return (value);
}