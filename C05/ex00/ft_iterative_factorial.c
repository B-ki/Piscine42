/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:30:28 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/12 19:26:08 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	stop;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	stop = nb;
	while (i < stop)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}
