/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 23:11:45 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/20 14:21:41 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_split.c"

int	main(void)
{
	char 	*str = "";
	char 	*charset = "Md9l0RH";
	char 	**dest;

	printf("Str : %s\nCharset : %s\n", str, charset);
	printf("Nombre de mot : %d\nTableau :\n", ft_word_count(str, charset));
	dest = ft_split(str, charset);
	printf("%s\n", dest[0]);
	printf("\n");

	char 	*str1 = "80nFFRLPDCO1eEhQjR1jE2qjuNKvm N3pO2";
	char 	*charset1 = "";
	char 	**dest1;
	int		i2;

	printf("Str : %s\nCharset : %s\n", str1, charset1);
	printf("Nombre de mot :%d\nTableau :\n", ft_word_count(str1, charset1));
	dest1 = ft_split(str1, charset1);
	for (i2 = 0; i2 < ft_word_count(str1, charset1); i2++)
	{
		printf("%s\n", dest1[i2]);
	}
	printf("\n");

	char 	*str2 = "80nFFRLPDCO1eEhQjR1jE2qjuNKvm N3pO2";
	char 	*charset2 = "Md9l0RH";
	char 	**dest2;
	int		i3;

	printf("Str : %s\nCharset : %s\n", str2, charset2);
	printf("Nombre de mot :%d\nTableau :\n", ft_word_count(str2, charset2));
	dest2 = ft_split(str2, charset2);
	for (i3 = 0; dest2[i3]; i3++)
	{
		printf("%s\n", dest2[i3]);
	}
	return (0);
}
