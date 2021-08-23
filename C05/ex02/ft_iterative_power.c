/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:13:28 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/12 19:26:23 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	init;

	i = power;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	init = nb;
	while (i > 1)
	{
		nb = nb * init;
		i--;
	}
	return (nb);
}
