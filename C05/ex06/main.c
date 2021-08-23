/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:30:58 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/12 19:15:55 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_is_prime.c"

int	main(void)
{
	printf("(2) : %d\n", ft_is_prime(2));
	printf("(2147483629) : %d\n", ft_is_prime(2147483629));
	printf("(37) : %d\n", ft_is_prime(37));
	printf("(39) : %d\n", ft_is_prime(39));
	printf("(-5) : %d\n", ft_is_prime(-5));
	printf("(0) : %d\n", ft_is_prime(0));
	return (0);
}
