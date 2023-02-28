/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:24:10 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/23 19:41:39 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*x;

	if (!lst)
		return (0);
	x = lst;
	while (x->next != NULL)
	{
		x = x->next;
	}
	return (x);
}
