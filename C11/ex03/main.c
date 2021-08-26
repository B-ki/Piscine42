/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:44:33 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/26 21:44:19 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_count_if.c"
#include <stdio.h>

int	ft_has_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *tab[] = {"Bonjour", "Bonj453our", "", "0123", "         "};
	char *tab1[] = {"", "", "", "", ""};
	printf("%d\n", ft_count_if(tab, 5, &ft_has_number));
	printf("%d\n", ft_count_if(tab1, 5, &ft_has_number));
	return (0);
}
