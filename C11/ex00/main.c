/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:57:33 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/26 19:58:03 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_foreach.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	l;

	l = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		l = -nb;
	}
	if (l < 10)
	{
		ft_putchar(l + 48);
		return ;
	}
	ft_putnbr(l / 10);
	ft_putchar((l % 10) + 48);
}


int	main(void)
{
	int tab1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int	tab2[] = {};
	int	tab3[] = {0, 1};

	ft_foreach(tab1, 9, &ft_putnbr);
	ft_putchar('\n');
	ft_foreach(tab2, 0, &ft_putnbr);
	ft_putchar('\n');
	ft_foreach(tab3, 2, &ft_putnbr);
	ft_putchar('\n');
}
