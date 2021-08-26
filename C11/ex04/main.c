/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:35:08 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/26 20:54:41 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_is_sort.c"

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	cmpe(int a, int b)
{
	if (a < b)
		return (-1);
	if (a > b)
		return (1);
	return (0);
}

int	main(void)
{
	int tab1[] = {1, 1, 2, 4, 4, 5, 6, 7, 8, 9, 9, 9};
	int tab2[] = {9, 9, 8, 7, 7, 6, 5, 4, 3, 2, 1, 1};
	int tab3[] = {1, 1, 2, 4, 3, 5, 6, 7, 8, 9, 9, 9};
	int tab4[] = {1, 1};
	int tab5[] = {1};
	int tab6[] = {};

	printf("1:%d\n", ft_is_sort(tab1, 12, &cmpe));
	printf("1:%d\n", ft_is_sort(tab2, 12, &cmpe));
	printf("0:%d\n", ft_is_sort(tab3, 12, &cmpe));
	printf("1:%d\n", ft_is_sort(tab4, 2, &cmpe));
	printf("1:%d\n", ft_is_sort(tab5, 1, &cmpe));
	printf("1:%d\n", ft_is_sort(tab6, 0, &cmpe));
}
