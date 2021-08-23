/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:18:14 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/06 14:08:01 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rev_int_tab.c"
#include <stdio.h>

int	main(void)
{
	int		tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		size;
	int		i;

	size = 10;
	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{	
		printf("%d", tab[i++]);
		if (i != size)
			printf(", ");
		else
			printf("\n");
	}
}
