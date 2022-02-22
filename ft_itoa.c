/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welida <welida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:20:43 by welida            #+#    #+#             */
/*   Updated: 2020/11/10 14:57:04 by welida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_number(long number)
{
	int	i;

	i = 1;
	if (number < 0)
	{
		number *= -1;
		i++;
	}
	while (number > 9)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	number;
	size_t	len;

	number = (long)n;
	len = ft_len_number(number);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (number < 0)
	{
		str[0] = '-';
		number *= -1;
	}
	while (number > 9)
	{
		len--;
		str[len] = (number % 10) + '0';
		number /= 10;
	}
	str[len - 1] = number + '0';
	return (str);
}
