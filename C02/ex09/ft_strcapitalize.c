/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:21:02 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/08 00:15:54 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char c);

int	ft_is_upper_case(char c);

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (ft_is_alphanumeric(str[i]))
		{
			if (ft_is_upper_case(str[i]))
				str[i] = str[i] + 32;
			i++;
			j++;
		}
		if (str[i - j] >= 'a' && str[i - j] <= 'z')
			str[i - j] = str[i - j] - 32;
		j = 0;
		i++;
	}
	return (str);
}

int	ft_is_alphanumeric(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_is_upper_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
