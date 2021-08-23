/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:05:37 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/07 13:43:20 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_numeric.c"

int		main(void)
{
	char	s1[]="0123456";
	char	s2[]="01Aa12345bb6z9";
	char	s3[]="";
	char	s4[]="Ab./!@#$%^&*()z";
	int	vs1;
	int	vs2;
	int	vs3;
	int	vs4;

	vs1 = ft_str_is_numeric(s1);
	printf("La string s1 est: '%s' et retourne %d\n", s1, vs1);
	vs2 = ft_str_is_numeric(s2);
	printf("La string s2 est: '%s' et retourne %d\n", s2, vs2);
	vs3 = ft_str_is_numeric(s3);
	printf("La string s3 est: '%s' et retourne %d\n", s3, vs3);
	vs4 = ft_str_is_numeric(s4);
	printf("La string s4 est: '%s' et retourne %d\n", s4, vs4);
	return(0);
}
