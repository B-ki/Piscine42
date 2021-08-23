/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:05:37 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/07 21:45:51 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ft_strncpy.c"

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	char	src1[]="abcdef";
	char	dest1[]="123456";
	char	src2[]="abcdef";
	char	dest2[]="1234";
	char	src3[]="abc";
	char	dest3[]="123456";
	int		i;

	printf("La string source est : '%s'\n", src1);
	printf("La string destination est : '%s'\n", dest1);
	ft_strncpy(dest1, src1, 3);
	printf("La string de destination avec n = 3 est devenue maintenant :\n");
	for (i = 0; i < 7; i++)
	{
		if (dest1[i] != '\0')
			ft_putchar(dest1[i]);
		else
			ft_putchar('@');
	}
	printf("\n");
	strncpy(dest1, src1, 3);
	printf("La fonction strncpy aurai sorti '%s'\n\n", dest1);

	printf("La string source est : '%s'\n", src2);
	printf("La string destination est : '%s'\n", dest2);
	ft_strncpy(dest2, src2, 4);
	printf("La string de destination avec n = 4 est devenue maintenant :\n");
	for (i = 0; i < 7; i++)
	{
		if (dest2[i] != '\0')
			ft_putchar(dest2[i]);
		else
			ft_putchar('@');
	}
	printf("\nAh, on voit que dans ce cas strncpy part en cacahuetes en creant une deuxieme chaine de caracteres, mais c'est normal, prevu dans la fonction : '..., alors la chaine produite ne sera pas terminee par un code ASCII nul.\nC'est de la responsabilite de l'utilisateur de le rajouer.'\n");
	strncpy(dest2, src2, 4);
	printf("La fonction strncpy aurai sorti %s\n", dest2);
	printf("Pour afficher le resultat par de la fonction strncpy directement, on utilise un 'printf' et non un 'ft_putchar' comme plus haut. On ne voit donc pas les cases suivantes. Si on utilises le ft_putchar :\n");
	for (i = 0; i < 7; i++)
	{
		if (dest2[i] != '\0')
			ft_putchar(dest2[i]);
		else
			ft_putchar('@');
	}
	printf("\nOn voit qu'avec le ft_putchar on a bien la nouvelle chaine qui commence\n\n");

	printf("La string source est : '%s'\n", src3);
	printf("La string destination est : '%s'\n", dest3);
	ft_strncpy(dest3, src3, 5);
	printf("La string de destination avec n = 5 est devenue maintenant :\n");
	for (i = 0; i < 7; i++)
	{
		if (dest3[i] != '\0')
			ft_putchar(dest3[i]);
		else
			ft_putchar('@');
	}
	printf("\n");
	strncpy(dest3, src3, 5);
	printf("La fonction strncpy aurai sorti '%s'\n\n", dest3);
	return(0);
}
