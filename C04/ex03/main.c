/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 10:38:31 by rcarles           #+#    #+#             */
/*   Updated: 2021/08/09 23:30:43 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.c"

int main(void)
{
	printf("%d\n", ft_atoi("+-455   7d56"));  
	printf("%d\n", ft_atoi("\n--+9c42"));  
	printf("%d\n", ft_atoi("-5123657c2"));  
	
	return (0);
}
