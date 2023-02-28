/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:35:47 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:48:57 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	positive_number(int nb, int fd)
{
	char	c;
	char	arr[20];
	int		i;
	int		len;

	i = 0;
	while (nb > 0)
	{
		c = (nb % 10) + '0';
		arr[i] = c;
		nb = nb / 10;
		i++;
	}
	len = i - 1;
	while (len >= 0)
	{
		ft_putchar_fd(arr[len], fd);
		len--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	nb;

	nb = n;
	if (nb == 0)
		ft_putchar_fd('0', fd);
	else if (nb > 0)
	{
		positive_number(nb, fd);
	}
	else if (nb == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		nb = nb * (-1);
		ft_putchar_fd('-', fd);
		positive_number(nb, fd);
	}
}
