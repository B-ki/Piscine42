/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:30:58 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/12 19:13:20 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sqrt.c"

int	main(void)
{
	printf("sqrt (2) : %d\n", ft_sqrt(2));
	printf("sqrt (2147395600) : %d\n", ft_sqrt(2147395600));
	printf("sqrt (36) : %d\n", ft_sqrt(36));
	printf("sqrt (-5) : %d\n", ft_sqrt(-5));
	printf("sqrt (0) : %d\n", ft_sqrt(0));
	printf("sqrt (1) : %d\n", ft_sqrt(1));
	return (0);
}
