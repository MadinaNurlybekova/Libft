/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:02:31 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:52:00 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	size_t	i;

	duplicate = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!duplicate)
		return (0);
	i = 0;
	while (s[i])
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = 0;
	return (duplicate);
}
