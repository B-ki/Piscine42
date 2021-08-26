/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:46:12 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/26 21:43:06 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_atoi(char *str);
void	ft_solve(int a, int b, char **av);
int		check_operator(char **av);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);

int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac != 4)
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	if (!check_operator(av))
	{
		ft_putstr("0\n");
		return (0);
	}
	ft_solve(a, b, av);
	return (0);
}

int	check_operator(char **av)
{
	int	i;

	i = 0;
	while (av[2][i])
		i++;
	if (i != 1)
		return (0);
	if (av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '/'
			&& av[2][0] != '*' && av[2][0] != '%')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	c_minus;

	i = 0;
	nb = 0;
	c_minus = 1;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] == '+' || (str[i] == '-'))
	{
		if (str[i] == '-')
			c_minus *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}	
	return (nb * c_minus);
}

void	ft_solve(int a, int b, char **av)
{
	int		(*f[5])(int, int);
	int		i;
	char	*str;

	str = "+-*/%";
	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_mul;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	i = 0;
	while (av[2][0] != str[i])
		i++;
	if (i == 3 && b == 0)
		ft_putstr("Stop : division by zero\n");
	else if (i == 4 && b == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr((*f[i])(a, b));
		ft_putstr("\n");
	}
}
