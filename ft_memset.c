/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:05:57 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:46:30 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	size_t			i;

	s_ptr = s;
	i = 0;
	while (i < n)
	{
		s_ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
