/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 23:30:41 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/16 16:36:36 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);
int				ft_belong_base(char c, char *base);
int				ft_position_base(char c, char *str);
int				ft_test_base(char *base);

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		c_minus;
	int		n;
	int		t_base;

	t_base = ft_strlen(base);
	i = 0;
	c_minus = 1;
	n = 0;
	if (!ft_test_base(base))
		return (0);
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c_minus *= -1;
		i++;
	}
	while (str[i] && ft_belong_base(str[i], base))
	{
		n = n * t_base + ft_position_base(str[i], base);
		i++;
	}
	return (n * c_minus);
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_belong_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		else
			i++;
	}
	return (0);
}

int	ft_position_base(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != c)
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
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
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
