/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:24:19 by cluis-go          #+#    #+#             */
/*   Updated: 2021/08/24 13:41:29 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_swap(char *a, char *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(int argc, char **argv)
{
	int	j;
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(argv[i], argv[i + 1]);
				i = 0;
			}
			i++;
		}
	}
	j = 1;
	while (j < argc)
	{
		ft_print_string(argv[j]);
		j++;
	}
	return (0);
}
