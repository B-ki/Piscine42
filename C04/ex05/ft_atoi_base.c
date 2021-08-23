/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:25:09 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/10 19:53:03 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_belong_base(char c, char *base);

int	ft_position_base(char c, char *str);

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

int	ft_strlen(char *str)
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
