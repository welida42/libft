/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welida <welida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:18:58 by welida            #+#    #+#             */
/*   Updated: 2020/11/07 15:04:53 by welida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int number;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = n * (-1);
	}
	else
		number = n;
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd(number % 10 + '0', fd);
}
