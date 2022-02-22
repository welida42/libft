/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welida <welida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:01:36 by welida            #+#    #+#             */
/*   Updated: 2020/11/10 14:45:46 by welida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sumlen;
	size_t	i;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	sumlen = ft_strlen(s1) + ft_strlen(s2);
	p = malloc(sizeof(char) * (sumlen + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (i < sumlen)
	{
		p[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	p[sumlen] = '\0';
	return (p);
}
