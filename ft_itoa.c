/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:32:26 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:36:02 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		n *= -1;
		counter++;
	}
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

static void	ft_numcpy(char *s, long int n, size_t size)
{
	int			i;
	int			len;
	long int	nb;

	i = 0;
	nb = n;
	s[size] = '\0';
	len = size - 1;
	while (nb > 0)
	{
		s[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char		*s;
	size_t		size;
	long int	nb;

	nb = n;
	size = ft_count_digits(nb);
	if (n == 0)
	{
		s = (char *)malloc(sizeof(char) * 2);
		if (!s)
			return (0);
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	s = (char *)malloc(sizeof(char) * size + 1);
	if (!s)
		return (0);
	if (n < 0)
	{
		nb = nb * -1;
		s[0] = '-';
	}
	ft_numcpy(s, nb, size);
	return (s);
}
