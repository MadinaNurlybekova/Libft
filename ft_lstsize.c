/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:22:47 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:47:17 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*x;
	int		counter;

	x = lst;
	counter = 0;
	while (x != NULL)
	{
		counter++;
		x = x->next;
	}
	return (counter);
}
