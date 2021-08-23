/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:30:05 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/18 14:46:10 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_word_count(char *str, char *charset);
int		ft_getsize(char *str, char *charset);
int		ft_belong(char c, char *str);
void	ft_strcpy(char *str, char *dest, int size);

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = 0;
	dest = malloc(sizeof(*dest) * (ft_word_count(str, charset) + 1));
	while (str[i])
	{
		while (ft_belong(str[i], charset) && str[i])
			i++;
		if (!ft_belong(str[i], charset))
		{
			size = ft_getsize(&str[i], charset);
			dest[j] = malloc(sizeof(char) * (size + 1));
			ft_strcpy(&str[i], &dest[j][0], size);
		}
		while (!ft_belong(str[i], charset) && str[i])
			i++;
		j++;
	}
	dest[ft_word_count(str, charset)] = 0;
	return (dest);
}

int	ft_getsize(char *str, char *charset)
{
	int	i;

	i = 0;
	while (!ft_belong(str[i], charset) && str[i])
		i++;
	return (i);
}

int	ft_belong(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (ft_belong(str[i], charset) && str[i])
			i++;
		if (!ft_belong(str[i], charset) && str[i])
		{
			c++;
			while (!ft_belong(str[i], charset) && str[i])
				i++;
		}
	}
	return (c);
}

void	ft_strcpy(char *str, char *dest, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}
