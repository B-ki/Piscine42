/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:05:37 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/08 00:01:44 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcapitalize.c"

int		main(void)
{
	char	s1[]="saLUt, comMEnt u vAs ? 42mots quarante-deux; cinquante+et+un";

	printf("La string s1 est: '%s'\n", s1);
	ft_strcapitalize(s1);
	printf("La string s1 est maintenant: '%s'\n", s1);
	return(0);
}
