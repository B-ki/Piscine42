/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 23:07:05 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/05 23:33:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.c"
#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;

	a = 0;
	b = 42;
	printf("Au debut a = %d et b = %d", a, b);
	ft_swap(&a, &b);
	printf("\n\nMaintenant a = %d et b = %d", a, b);
}
