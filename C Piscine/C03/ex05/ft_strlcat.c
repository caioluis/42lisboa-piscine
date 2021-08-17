/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:49:03 by cluis-go          #+#    #+#             */
/*   Updated: 2021/08/17 16:32:49 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	initialLength;

	initialLength = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < size - ft_strlen(dest) - 1)
	{
		dest[initialLength + i] = src[i];
		i++;
	}
	dest[ft_strlen(dest)] = '\0';
	return (initialLength + ft_strlen(src));
}
