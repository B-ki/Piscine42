/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:27:28 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/09 18:14:39 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	t_src;
	unsigned int	t_dest;
	unsigned int	i;

	i = 0;
	t_src = 0;
	t_dest = 0;
	while (dest[t_dest] != '\0')
		t_dest++;
	while (src[t_src])
		t_src++;
	if (size< t_dest) // ie si le size input manuellement n'est pas correct
		return (size + t_src);
	while (src[i] && i + t_dest < size - 1)
	{
		dest[i + t_dest] = src [i];
		i++;
	}
	dest[i + t_dest] = '\0';
	return (t_dest + t_src);
}
