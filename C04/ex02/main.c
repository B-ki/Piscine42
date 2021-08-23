/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 10:38:31 by rcarles           #+#    #+#             */
/*   Updated: 2021/08/05 11:12:07 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.c"

int main(void)
{
	ft_putnbr(10);
	ft_putchar(' ');
	ft_putnbr(15874);
	ft_putchar(' ');
	ft_putnbr(-548);	
	ft_putchar(' ');
	ft_putnbr(-2147483648);
	ft_putchar(' ');
	ft_putnbr(2147483647);
	return (0);
}