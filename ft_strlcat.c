/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:51:49 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:56:23 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (!size && !dst)
		return (0);
	dest_len = 0;
	while (*(dst + dest_len) && (dest_len < size))
		dest_len++;
	i = dest_len;
	while (*(src + dest_len - i) && (dest_len + 1 < size))
	{
		*(dst + dest_len) = *(src + dest_len - i);
		dest_len++;
	}
	if (i < size)
		*(dst + dest_len) = 0;
	return (src_len + i);
}
