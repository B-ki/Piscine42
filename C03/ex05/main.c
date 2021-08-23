/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:56:58 by rcarles           #+#    #+#             */
/*   Updated: 2021/08/09 18:14:45 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcat.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst0[0] = "";
	char dst1[1] = "o";
	char dst2[2] = "ou";
	char dst3[3] = "oui";
	char dst4[4] = "oui\0";
	char dst5[5] = "oui\0";
	char dst6[6] = "oui\0";
	char dst7[7] = "oui\0";
	char dst01[0] = "";
	char dst11[1] = "o";
	char dst21[2] = "ou";
	char dst31[3] = "oui";
	char dst41[4] = "oui\0";
	char dst51[5] = "oui\0";
	char dst61[6] = "oui\0";
	char dst71[7] = "oui\0";
    char *src = "non";


    printf("La longueur de dest et src est toujours 3\n");
		printf("Size = 0 Int = %d Strlcat = %lu et string = %s\n", ft_strlcat(dst0, src, 0), strlcat(dst01, src, 0), dst0);
		printf("Size = 1 Int = %d Strlcat = %lu et string = %s\n", ft_strlcat(dst1, src, 1), strlcat(dst11, src, 1), dst1);
		printf("Size = 2 Int = %d Strlcat = %lu et string = %s\n", ft_strlcat(dst2, src, 2), strlcat(dst21, src, 2), dst2);
		printf("Size = 3 Int = %d Strlcat = %lu et string = %s\n", ft_strlcat(dst3, src, 3), strlcat(dst31, src, 3), dst3);
		printf("Size = 4 Int = %d Strlcat = %lu et string = %s\n", ft_strlcat(dst4, src, 4), strlcat(dst41, src, 4), dst4);
		printf("Size = 5 Int = %d Strlcat = %lu et string = %s\n", ft_strlcat(dst5, src, 5), strlcat(dst51, src, 5), dst5);
		printf("Size = 6 Int = %d Strlcat = %lu et string = %s\n", ft_strlcat(dst6, src, 6), strlcat(dst61, src, 6), dst6);
		printf("Size = 7 Int = %d Strlcat = %lu et string = %s\n", ft_strlcat(dst7, src, 7), strlcat(dst71, src, 7), dst7);

    return(0);
}
