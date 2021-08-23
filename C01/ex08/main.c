/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:18:14 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/06 23:02:20 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort_int_tab.c"
#include <stdio.h>

int	main(void)
{
	int		tab[10] = {9, 7, 8, 3, 4, 6, 5, 2, 0, 1};
	int		size;
	int		i;

	size = 10;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{	
		printf("%d", tab[i++]);
		if (i != size)
			printf(", ");
		else
			printf("\n");
	}
}
