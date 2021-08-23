/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 23:49:08 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/18 11:27:15 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_range.c"

int	main(void)
{
	int	min;
	int	max;
	int	*smpl;
	int	i;

	min = 0;
	max = -1;
	printf("%d | %p | ", ft_ultimate_range(&smpl, min, max), smpl);
	for (i = 0; i < (max - min); i++)
		printf("%d ", smpl[i]);
	return (0);
}
