/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:00:52 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:19:19 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem_ptr;

	mem_ptr = malloc(nmemb * size);
	if (!mem_ptr)
		return (0);
	ft_bzero(mem_ptr, nmemb * size);
	return (mem_ptr);
}
