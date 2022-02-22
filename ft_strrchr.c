/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welida <welida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:13:45 by welida            #+#    #+#             */
/*   Updated: 2020/11/09 15:14:59 by welida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	p = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			p = (char *)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		p = (char *)(s + i);
	return (p);
}
