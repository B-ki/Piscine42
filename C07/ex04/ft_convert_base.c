/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 23:30:49 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/18 13:47:23 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_count_size(int nb, int size);
unsigned int	ft_strlen(char *str);
int				ft_test_base(char *base);
int				ft_atoi_base(char *str, char *base);
void			ft_putnbr_base(int nbr, char *base, char *dest);
void			ft_reverse(char *dest, int size_dest);
void			ft_swap(char *a, char *b);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				i;
	int				size_dest;
	unsigned int	size_b_to;
	int				number;
	char			*dest;

	if (!ft_test_base(base_from) || !ft_test_base(base_to))
		return (0);
	number = ft_atoi_base(nbr, base_from);
	size_b_to = ft_strlen(base_to);
	size_dest = ft_count_size(number, size_b_to);
	dest = malloc(sizeof(*dest) * size_dest);
	if (dest == 0)
		return (0);
	i = 0;
	dest[0] = '\0';
	ft_putnbr_base(number, base_to, dest);
	ft_reverse(dest, size_dest);
	dest[size_dest] = '\0';
	return (dest);
}

void	ft_putnbr_base(int nbr, char *base, char *dest)
{
	long int		l_nb;
	unsigned int	t_base;

	l_nb = nbr;
	if (l_nb < 0)
	{
		l_nb *= -1;
		dest[0] = '-';
		dest++;
	}
	t_base = ft_strlen(base);
	if (l_nb >= t_base)
	{
		ft_putnbr_base(l_nb / t_base, base, dest + 1);
		ft_putnbr_base(l_nb % t_base, base, dest);
	}
	else
		dest[0] = (base[l_nb]);
}

int	ft_count_size(int nb, int size)
{
	int			i;
	long int	l_nb;

	l_nb = nb;
	if (l_nb < 0)
	{
		i = 1;
		l_nb *= -1;
	}
	else
		i = 0;
	if (l_nb != 0)
	{
		while (l_nb > 0)
		{
			l_nb = l_nb / size;
			i++;
		}
		return (i);
	}
	else
		return (1);
}

void	ft_reverse(char *dest, int size_dest)
{
	int		i;
	int		j;

	if (dest[0] == '-')
		i = 1;
	else
		i = 0;
	j = size_dest - 1;
	while (i < j)
	{
		ft_swap(&dest[i], &dest[j]);
		i++;
		j--;
	}
}

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
