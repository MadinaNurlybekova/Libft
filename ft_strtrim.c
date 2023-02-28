/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:51:45 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:59:40 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len;
	size_t	start;
	size_t	i;

	len = ft_strlen(s1);
	start = 0;
	while (s1[start] && (ft_check(s1[start], set) == 1))
		start++;
	i = len - 1;
	if (start > i)
		return (ft_strdup(s1 + i + 1));
	while (i != 0 && (ft_check(s1[i], set) == 1))
		i--;
	trim = (char *)malloc(sizeof(char) * (i - start) + 2);
	if (!trim)
		return (0);
	ft_strlcpy(trim, s1 + start, i - start + 2);
	return (trim);
}
