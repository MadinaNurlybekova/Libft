/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:25:50 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:46:43 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	src_ptr = (const char *)src;
	dest_ptr = (char *)dest;
	if (src_ptr == dest_ptr)
		return (dest);
	else if (src_ptr < dest_ptr)
	{
		src_ptr += n - 1;
		dest_ptr += n - 1;
		while (n--)
			*dest_ptr-- = *src_ptr--;
	}
	else if (dest_ptr <= src_ptr)
	{
		while (n--)
			*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
