/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 18:35:16 by rcarles           #+#    #+#             */
/*   Updated: 2021/08/09 18:57:19 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcmp.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str1 = "Salut lol";
	char *str2 = "Salut lol";

	char *str3 = "";
	char *str4 = "sacoucou mdr";

	char *str5 = "";
	char *str6 = "";

	char *str7 = "comment ca va123";
	char *str8 = "comment ca va";

	printf("Expected %d:  %d\n", strcmp(str1, str2), ft_strcmp(str1, str2));
	printf("Expected %d:  %d\n", strcmp(str3, str4), ft_strcmp(str3, str4));
	printf("Expected %d:  %d\n", strcmp(str5, str6), ft_strcmp(str5, str6));
	printf("Expected %d:  %d\n", strcmp(str7, str8), ft_strcmp(str7, str8));

	return 0;
}
