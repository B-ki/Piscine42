/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:05:37 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/08 12:55:14 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ft_strlcpy.c"

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	char	src1[]="abcdef";
	char	dest1[]="123456";
	char	dest1_1[]="123456";
	int		i1;
	char	src2[]="abcdef";
	char	dest2[]="1234";
	char	dest2_1[]="1234";
	int		i2;
	char	src3[]="abc";
	char	dest3[]="123456";
	char	dest3_1[]="123456";
	int		i3;
	int		i;

	printf("La string source est : '%s'\n", src1);
	printf("La string destination est : '%s'\n", dest1);
	i1 = ft_strlcpy(dest1, src1, 7);
	printf("La string de destination avec size = 7 est devenue maintenant :\n");
	for (i = 0; i < 7; i++)
	{
		if (dest1[i] != '\0')
			ft_putchar(dest1[i]);
		else
			ft_putchar('@');
	}
	printf(" et sort le count '%d'\n", i1);
	i1 = strlcpy(dest1_1, src1, 7);
	printf("La fonction strlcpy aurai sorti :\n%s et le count '%d'\n\n", dest1_1, i1);

	printf("La string source est : '%s'\n", src2);
	printf("La string destination est : '%s'\n", dest2);
	i2 = ft_strlcpy(dest2, src2, 5);
	printf("La string de destination avec n = 5 est devenue maintenant :\n");
	for (i = 0; i < 7; i++)
	{
		if (dest2[i] != '\0')
			ft_putchar(dest2[i]);
		else
			ft_putchar('@');
	}
	printf(" et sort le count '%d'\n", i2);
	i2 = strlcpy(dest2_1, src2, 5);
	printf("La fonction strncpy aurait sorti : \n");
	for (i = 0; i < 7; i++)
	{
		if (dest2_1[i] != '\0')
			ft_putchar(dest2[i]);
		else
			ft_putchar('@');
	}

	printf(" et sort le count '%d'\n\nLa string source est : '%s'\n", i2, src3);
	printf("La string destination est : '%s'\n", dest3);
	i3 = ft_strlcpy(dest3, src3, 7);
	printf("La string de destination avec n = 7 est devenue maintenant :\n");
	for (i = 0; i < 7; i++)
	{
		if (dest3[i] != '\0')
			ft_putchar(dest3[i]);
		else
			ft_putchar('@');
	}
	printf(" et sort le count '%d'\n", i3);
	i3 = strlcpy(dest3_1, src3, 7);
	printf("La fonction strncpy aurai sorti :\n%s et le count '%d'\n", dest3_1, i3);
	return(0);
}
