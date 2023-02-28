/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:15:01 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:50:55 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	if (s[i] == 0)
		return (counter);
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] != c && s[i] != 0)
				i++;
		}
		else
			i++;
	}
	return (counter);
}

static void	ft_free(char **array, int arr_i)
{
	while (arr_i > 0)
	{
		free(array[arr_i]);
		arr_i--;
	}
	free(array);
}

static int	do_split(char const *s, char c, char **array)
{
	int	start;
	int	arr_i;
	int	len;

	start = 0;
	arr_i = 0;
	while (arr_i < ft_count_words(s, c))
	{
		while (s[start] == c)
			start++;
		len = 0;
		while (s[len + start] != c)
			len ++;
		array[arr_i] = ft_substr(s, start, len);
		if (!array[arr_i])
		{
			ft_free(array, arr_i);
			return (0);
		}
		start += len;
		arr_i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (ft_count_words(s, c) != 0)
	{
		array = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
		if (!array)
			return (0);
		if (!do_split(s, c, array))
			return (0);
	}
	else
	{
		array = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
		if (!array)
			return (0);
	}
	array[ft_count_words(s, c)] = 0;
	return (array);
}
