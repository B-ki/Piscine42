/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 23:49:08 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/18 13:27:12 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strjoin.c"

int	main(void)
{
	char *strs1[2] = {"",""};
	char *sep1 = "";
	printf("Resultat attendu : \n%s\n\n", ft_strjoin(2, strs1, sep1));
	
	char *strs2[2] = {"abc","123"};
	char *sep2 = "";
	printf("Resultat attendu : abc123\n%s\n\n", ft_strjoin(2, strs2, sep2));
	
	char *strs3[2] = {"",""};
	char *sep3 = "sep";
	printf("Resultat attendu : sep\n%s\n\n", ft_strjoin(2, strs3, sep3));
	
	char *strs4[2] = {"123","456"};
	char *sep4 = "sep";
	printf("Resultat attendu : 123sep456\n%s\n\n", ft_strjoin(2, strs4, sep4));
	
	char *strs5[0];
	char *sep5 = "sep";
	printf("Resultat attendu : \n%s\n\n", ft_strjoin(0, strs5, sep5));
	
	return (0);
}
