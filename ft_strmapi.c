/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:18:40 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:55:03 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mod_s;
	int		i;

	if (!s || !f)
		return (0);
	mod_s = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!mod_s)
		return (0);
	i = 0;
	while (s[i] != 0)
	{
		mod_s[i] = f(i, s[i]);
		i++;
	}
	mod_s[i] = 0;
	return (mod_s);
}
