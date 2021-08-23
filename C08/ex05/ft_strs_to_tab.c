/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:07:50 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/19 18:59:31 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen(char *str);
char	*ft_copy(char *str);

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab_struct;
	int			i;

	i = 0;
	tab_struct = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab_struct)
		return (NULL);
	while (i < ac)
	{
		tab_struct[i].size = ft_strlen(av[i]);
		tab_struct[i].str = av[i];
		tab_struct[i].copy = ft_copy(av[i]);
		i++;
	}
	tab_struct[ac].size = 0;
	tab_struct[ac].str = NULL;
	tab_struct[ac].copy = NULL;
	return (tab_struct);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_copy(char *str)
{
	int		i;
	char	*dest;
	int		size;

	i = 0;
	size = ft_strlen(str);
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (0);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
