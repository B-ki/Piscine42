/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 23:57:22 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/06 23:57:38 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	temp_div;
	int	temp_mod;

	temp_div = a / b;
	temp_mod = a % b;
	*div = temp_div;
	*mod = temp_mod;
}
