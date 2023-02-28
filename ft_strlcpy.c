/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:51:14 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:56:34 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	else if (src_len >= size)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	else
	{
		ft_memcpy(dst, src, src_len + 1);
	}
	return (src_len);
}
