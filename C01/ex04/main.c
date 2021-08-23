/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:54:26 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/06 11:12:30 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	int		*ptr_a;
	int		*ptr_b;

	ptr_a = &a;
	ptr_b = &b;
	a = 42;
	b = 5;
	printf("Au debut a = %d et b = %d", a, b);
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("\n\na / b = %d et a modulo b = %d", *ptr_a, *ptr_b);
}
