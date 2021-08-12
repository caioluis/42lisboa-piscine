/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:15:34 by cluis-go          #+#    #+#             */
/*   Updated: 2021/08/12 18:50:35 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char c)
{
	int	value;

	value = 0;
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		value = 1;
	return (value);
}

int	ft_is_alpha(char c)
{
	int	i;
	int	value;

	i = 0;
	value = 1;
	if (c < 97 || c > 122)
		value = 0;
	return (value);
}

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (ft_is_alphanumeric(str[i]))
		{
			if (value == 0)
			{
				value = 1;
				if (ft_is_alpha(str[i]) == 1)
					str[i] -= 32;
			}
		}
		else
		{
			value = 0;
		}
		i++;
	}
	return (str);
}
