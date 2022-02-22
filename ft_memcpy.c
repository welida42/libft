/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welida <welida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:51:26 by welida            #+#    #+#             */
/*   Updated: 2020/11/10 14:39:09 by welida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_ptr;
	unsigned const char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned const char *)src;
	if (!dst && !src)
		return (0);
	while (n)
	{
		*dst_ptr = *src_ptr;
		dst_ptr++;
		src_ptr++;
		n--;
	}
	return (dst);
}
