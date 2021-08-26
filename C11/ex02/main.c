/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:02:56 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/26 20:03:08 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_any.c"

int	is_even(char *a)
{
	return(a[0] >= '0' && a[0] <= '9');
}

int	main(void)
{
	char	*tab1[] = {"ehs", "wgg", "htht", "whwa", "eheh", "45gw", 0};
	char	*tab2[] = {"wggw", 0};
	char	*tab3[] = {"gwgwgqg", "wgegweg", 0};
	int res1, res2, res3;

	res1 = ft_any(tab1, &is_even);
	res2 = ft_any(tab2, &is_even);
	res3 = ft_any(tab3, &is_even);

	printf("%d\n", res1);
	printf("%d\n", res2);
	printf("%d\n", res3);
}
