/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:05:37 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/08 19:16:24 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putstr_non_printable.c"

int		main(void)
{
	char	s1[]="ASDKJKF\nJASKJ           🦄";
	char	s2[]="asdkj\x05\x05/AWsd";
	char	s3[]="qwe\v\tqwe";
	char	s4[]="x\x0f&*()z";

	ft_putstr_non_printable(s1);
	printf("\n\n");
	ft_putstr_non_printable(s2);
	printf("\n\n");
	ft_putstr_non_printable(s3);
	printf("\n\n");
	ft_putstr_non_printable(s4);
	printf("\n\n");
	return(0);
}
