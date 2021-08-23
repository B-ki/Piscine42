/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:53:06 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/18 13:27:16 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_space_dest(char **strs, char *sep, int size);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		space;
	char	*dest;

	if (size == 0)
	{
		dest = "";
		return (dest);
	}
	space = ft_space_dest(strs, sep, size);
	dest = malloc(sizeof(*dest) * space);
	if (dest == 0)
		return (0);
	i = 0;
	dest[0] = '\0';
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		i++;
		if (i != (size - 1))
			ft_strcat(dest, sep);
	}
	return (dest);
}

int	ft_space_dest(char **strs, char *sep, int size)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	while (i < size)
	{
		space = space + ft_strlen(strs[i]);
		i++;
		if (i != size - 1)
			space = space + ft_strlen(sep);
	}
	return (space);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	k;
	int	j;

	k = 0;
	j = 0;
	while (dest[k])
		k++;
	while (src[j])
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	dest[k] = '\0';
	return (dest);
}
