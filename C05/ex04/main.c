/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:30:58 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/12 19:11:28 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_fibonacci.c"

int	main(void)
{
	printf("Fibonacci de -32 doit etre -1, et on a : %d\n", ft_fibonacci(-32));
	printf("Fibonacci de 0 doit etre 0, et on a : %d\n", ft_fibonacci(0));
	printf("Fibonacci de 1 doit etre 1, et on a : %d\n", ft_fibonacci(1));
	printf("Fibonacci de 8 doit etre 21, et on a : %d\n", ft_fibonacci(8));
	printf("Fibonacci de 16 doit etre 987, et on a : %d\n", ft_fibonacci(16));
	return (0);
}
