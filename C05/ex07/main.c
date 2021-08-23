/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:30:58 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/12 19:16:31 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_find_next_prime.c"

int	main(void)
{
	printf("(-34) : %d\n", ft_find_next_prime(-34));
	printf("(2147483630) : %d\n", ft_find_next_prime(2147483630));
	printf("(37) : %d\n", ft_find_next_prime(37));
	printf("(38) : %d\n", ft_find_next_prime(38));
	printf("(0) : %d\n", ft_find_next_prime(0));
	return (0);
}
