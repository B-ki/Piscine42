/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:13:46 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/06 10:52:21 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;
	int		*ptr_div;
	int		*ptr_mod;

	ptr_div = &div;
	ptr_mod = &mod;
	div = 0;
	printf("%d\n", *ptr_div);
	a = 42;
	b = 5;
	printf("Au debut a = %d et b = %d", a, b);
	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("\n\na / b = %d et a modulo b = %d", div, mod);
}
