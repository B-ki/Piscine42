/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 22:34:40 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/10 18:48:49 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strlen(char *str);

int		ft_test_base(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int		t_base;
	unsigned long int	u_nb;

	if (ft_test_base(base) == 0)
		return ;
	t_base = ft_strlen(base);
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr *= -1;
	}
	u_nb = nbr;
	if (u_nb > t_base)
	{
		ft_putnbr_base(u_nb / t_base, base);
		ft_putnbr_base(u_nb % t_base, base);
	}
	else
		ft_putchar(base[u_nb]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_test_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[j] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
