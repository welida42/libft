/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welida <welida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:12:42 by welida            #+#    #+#             */
/*   Updated: 2020/11/10 14:39:37 by welida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_ptr;
	unsigned char	*dst_ptr;
	size_t			i;

	i = 0;
	src_ptr = (unsigned char *)src;
	dst_ptr = (unsigned char *)dst;
	if (!dst && !src)
		return (0);
	if (src_ptr > dst_ptr)
	{
		while (i < len)
		{
			*(dst_ptr + i) = *(src_ptr + i);
			i++;
		}
	}
	else
		while (len)
		{
			len--;
			*(dst_ptr + len) = *(src_ptr + len);
		}
	return (dst);
}
