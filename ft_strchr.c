/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:15:53 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:53:17 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			terminator_index;
	unsigned char	c_char;

	c_char = c;
	if (c == 0)
	{
		terminator_index = ft_strlen(s);
		return ((char *)s + terminator_index);
	}
	else
	{
		while (*s)
		{
			if (c_char == *s)
				return ((char *)s);
			s++;
		}
		return (0);
	}
}
