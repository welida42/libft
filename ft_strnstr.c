/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welida <welida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:39:34 by welida            #+#    #+#             */
/*   Updated: 2020/11/07 15:04:53 by welida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	need_len;
	char	*p;

	i = 0;
	p = (char *)haystack;
	need_len = ft_strlen(needle);
	if (need_len == 0)
		return (p);
	while (p[i] != '\0' && i < len)
	{
		j = 0;
		while (p[i + j] != '\0' && needle[j] != '\0'
				&& p[i + j] == needle[j] && i + j < len)
			j++;
		if (j == need_len)
			return (p + i);
		i++;
	}
	return (0);
}
