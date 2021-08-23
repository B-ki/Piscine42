/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 00:19:32 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/08 19:16:21 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_non_printable(char c);

void	ft_putchar(char c);

void	ft_hexadecimal(char c);

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_non_printable(str[i]))
			ft_hexadecimal(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	ft_str_is_non_printable(char c)
{
	if (c == '\0')
		return (1);
	if (c >= ' ' && c <= '~')
		return (0);
	else
		return (1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_hexadecimal(char c)
{
	char	uc;
	int				a;
	int				b;
	int				n;
	char			*base_hexa;

	base_hexa = "0123456789abcdef";
	uc = c;
	n = (int) uc;
	a = (n / 16) % 16;
	b = n % 16;
	ft_putchar('\\');
	ft_putchar(base_hexa[a]);
	ft_putchar(base_hexa[b]);
}
