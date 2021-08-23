/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:05:37 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/07 22:06:25 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strupcase.c"

int		main(void)
{
	char	s1[]="ASDsdasdKJKFJASKJ";
	char	s2[]="asdkjhaAEWsd";
	char	s3[]="";
	char	s4[]="asdasdAb./!@#$%^&*()z";
//	char	*ptr_s1;
//	char	*ptr_s2;
//	char	*ptr_s3;
//	char	*ptr_s4;

//	ptr_s1 = &s1;
//	ptr_s2 = &s2;
//	ptr_s3 = &s3;
//	ptr_s4 = &s4;
	printf("La string s1 est: '%s'\n", s1);
	ft_strupcase(s1);
	printf("La string s1 est maintenant: '%s'\n", s1);
	printf("La string s2 est: '%s'\n", s2);
	ft_strupcase(s2);
	printf("La string s2 est maintenant: '%s'\n", s2);
	printf("La string s3 est: '%s'\n", s3);
	ft_strupcase(s3);
	printf("La string s3 est maintenant: '%s'\n", s3);
	printf("La string s4 est: '%s'\n", s4);
	ft_strupcase(s4);
	printf("La string s4 est maintenant: '%s'\n", s4);
	return(0);
}
