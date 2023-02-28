/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:53:49 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:59:54 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;

	sub_s = malloc(sizeof(char) * len + 1);
	if (!sub_s)
		return (0);
	i = 0;
	if (start >= ft_strlen(s))
	{
		sub_s[i] = 0;
		return (sub_s);
	}
	while ((i < len) && *(s + start))
	{
		sub_s[i] = s[start];
		i++;
		start++;
	}
	sub_s[i] = 0;
	return (sub_s);
}
