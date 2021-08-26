/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:00:11 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/26 20:00:36 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_map.c"

int	add_ten(int a)
{
	return (a + 10);
}

void	print_tab(int *tab, int length)
{
	int i;

	i = 0;
	while (i < length)
		printf("%d ", tab[i++]);
	printf("\n");
}


int	main(void)
{
	int	tab1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	tab2[] = {};
	int	tab3[] = {0, 1};
	int *res1, *res2, *res3;

	res1 = ft_map(tab1, 10, &add_ten);
	res2 = ft_map(tab2, 0, &add_ten);
	res3 = ft_map(tab3, 2, &add_ten);

	print_tab(res1, 10);
	print_tab(res2, 0);
	print_tab(res3, 2);
}
