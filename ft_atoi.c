/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welida <welida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:08:34 by welida            #+#    #+#             */
/*   Updated: 2020/11/14 18:00:48 by welida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		if ((sign == -1) && \
				((number > 214748364) || (number == 214748364 && *str > '8')))
			return (0);
		else if ((sign == 1) && \
				((number > 214748364) || (number == 214748364 && *str > '7')))
			return (-1);
		number = number * 10 + *str - '0';
		str++;
	}
	return (sign * number);
}
