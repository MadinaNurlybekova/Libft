/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:03:07 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:18:41 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_ptr;
	size_t			i;

	i = 0;
	s_ptr = (unsigned char *)s;
	while (i < n)
	{
		s_ptr[i] = 0;
		i++;
	}
}
