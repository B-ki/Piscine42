/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:05:37 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/07 16:19:36 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlowcase.c"

int		main(void)
{
	char	s1[]="ASDsdasdKj oiug hkdjSKJ";
	char	s2[]="OIFSGOIDFMGOI";
	char	s3[]="";
	char	s4[]="aOFDGOKdAb./!@#$%^&*()z";

	printf("La string s1 est: '%s'\n", s1);
	ft_strlowcase(s1);
	printf("La string s1 est maintenant: '%s'\n", s1);
	printf("La string s2 est: '%s'\n", s2);
	ft_strlowcase(s2);
	printf("La string s2 est maintenant: '%s'\n", s2);
	printf("La string s3 est: '%s'\n", s3);
	ft_strlowcase(s3);
	printf("La string s3 est maintenant: '%s'\n", s3);
	printf("La string s4 est: '%s'\n", s4);
	ft_strlowcase(s4);
	printf("La string s4 est maintenant: '%s'\n", s4);
	return(0);
}
