/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:02:00 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/26 14:29:51 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cmp(int *tab, int length, int(*f)(int, int));

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	if (length < 2)
		return (1);
	if (cmp(tab, length, f) == -1)
	{
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	else
	{
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	cmp(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i], tab[i + 1]) != 0)
			return ((*f)(tab[i], tab[i + 1]));
		i++;
	}
	return (0);
}
