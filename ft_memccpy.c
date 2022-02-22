/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welida <welida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:27:11 by welida            #+#    #+#             */
/*   Updated: 2020/11/10 14:38:27 by welida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		c_unch;
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	c_unch = (unsigned char)c;
	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		if (src_ptr[i] == c_unch)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
