/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:43:09 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/26 21:53:29 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*n_tab;

	n_tab = malloc(sizeof(int) * length);
	if (!n_tab)
		return (NULL);
	i = 0;
	while (i < length)
	{
		n_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (n_tab);
}
