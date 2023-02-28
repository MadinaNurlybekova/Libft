/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:24:51 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:59:34 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			terminator_index;
	unsigned char	c_char;
	char			*ptr_char;

	c_char = c;
	ptr_char = 0;
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
				ptr_char = (char *)s;
			s++;
		}
		return (ptr_char);
	}
}
