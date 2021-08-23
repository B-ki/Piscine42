/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:18:14 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/06 13:22:13 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		count;

	str = "Vive les frites !";
	count = ft_strlen(str);
	printf("La string '%s' contient %d caracteres !", str, count);

}
