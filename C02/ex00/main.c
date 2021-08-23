/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:05:37 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/07 12:09:33 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcpy.c"

int		main(void)
{
	char	src[]="Bonj";
	char	dest[]="Lolilol";

	printf("La string source est : '%s'\n", src);
	printf("La string destination est : '%s'\n", dest);
	ft_strcpy(dest, src);
	printf("La string de destination est devenue maintenant : '%s'\n", dest);
	return(0);
}
