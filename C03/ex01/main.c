/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:48:23 by rcarles           #+#    #+#             */
/*   Updated: 2021/08/09 18:37:44 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str1 = "Salut lol";
	char *str2 = "Salut lol";

	char *str3 = "saremisterio";
	char *str4 = "sacoucou mdr";

	char *str5 = "o04u3jf34if34f340f34j";
	char *str6 = "[]";

	char *str7 = "comment ca va";
	char *str8 = "comment ca va je sais pas";

	printf("Expected %d:  %d\n", strncmp(str1, str2, 4), ft_strncmp(str1, str2, 4));
	printf("Expected %d:  %d\n", strncmp(str3, str4, 0), ft_strncmp(str3, str4, 0));
	printf("Expected %d:  %d\n", strncmp(str5, str6, 8), ft_strncmp(str5, str6, 8));
	printf("Expected %d:  %d\n", strncmp(str7, str8, 20), ft_strncmp(str7, str8, 20));

	return 0;
}
