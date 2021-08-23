/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:11:51 by rcarles           #+#    #+#             */
/*   Updated: 2021/08/09 18:55:56 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncat.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[40] = "abcdef";
	char *str2 = "123456";
	char str11[40] = "abcdef";
	char *str21 = "123456";

	ft_strncat(str1, str2, 3);

	printf("On concatene les 3 premiers caracteres de '123456' sur 'abcdef', le resultat : %s\n", str1);

	ft_strncat(str11, str21, 3);

	printf("La vraie fonction donne  : %s", str11);

	return 0;
}
