/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:05:58 by rcarles           #+#    #+#             */
/*   Updated: 2021/08/09 18:52:24 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcat.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[40] = "Salut les ";
	char str11[40] = "Salut les ";
	char *str2 = "petits enfants !";
	char *str21 = "petits enfants !";

	ft_strcat(str1,	str2);
	strcat(str11, str21);
	printf("Notre fonction : %s\n", str1);
	printf("La vraie fonct : %s", str11);

	return 0;
}
