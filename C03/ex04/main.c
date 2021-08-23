/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:01:06 by rcarles           #+#    #+#             */
/*   Updated: 2021/08/09 18:31:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strstr.c"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *str1 = "salut 42 abc421def";
	char *to_find = "421";
	char *to_find2 = "";
	char *to_find3 = "cde";

	printf("Expected %s: %s\n", strstr(str1, to_find), ft_strstr(str1, to_find));
	printf("Expected %s: %s\n", strstr(str1, to_find2), ft_strstr(str1, to_find2));
	printf("Expected %s: %s\n", strstr(str1, to_find3), ft_strstr(str1, to_find3));

	return 0;
}
