/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:44:33 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/26 21:43:11 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_advanced_sort_string_tab.c"
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	int	i;
	char *tab[] = {"abc01", "abc05", "", "abc02", "", "abc03", "abc02", "abc04", 0};
	
	ft_sort_string_tab(tab, &ft_strcmp);
	for (i = 0; i < 8; i++)
		printf("%s\n", tab[i]);
	return (0);
}
