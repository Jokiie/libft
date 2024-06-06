/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccodere <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:57:04 by ccodere           #+#    #+#             */
/*   Updated: 2023/12/09 09:57:12 by ccodere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Example
// t_list *lst = NULL;
// char str[6] = "Celia";
// t_list *node = ft_lstnew(str);
// ft_lstadd_back(&lst, node)
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	t_list	*first;

	first = *lst;
	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else if (first == last)
	{
		first->next = new;
		return ;
	}
	else
		last->next = new;
}
