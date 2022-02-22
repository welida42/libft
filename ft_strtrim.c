/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welida <welida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 18:08:07 by welida            #+#    #+#             */
/*   Updated: 2020/11/11 17:55:43 by welida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*p;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_in_set(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		if (!(p = ft_strdup("")))
			return (NULL);
		else
			return (p);
	}
	while (is_in_set(s1[end - 1], set) == 0)
		end--;
	p = ft_substr(s1, start, end - start);
	return (p);
}
