/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:25:20 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/19 18:58:12 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_show_tab.c"
#include "ft_stock_str.h"
#include "ft_strs_to_tab.c"

int	main(int ac, char **av)
{
	struct s_stock_str	*par;

	par = ft_strs_to_tab(ac, av);
	ft_show_tab(par);
	return (0);
}
