/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:06:39 by qacjl             #+#    #+#             */
/*   Updated: 2024/06/07 13:26:11 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*index;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	index = ft_lstnew(f(lst->content));
	new = index;
	while (lst && lst->next)
	{
		if (!new)
			return (NULL);
		new->next = ft_lstnew(f(lst->next->content));
		new = new->next;
		lst = lst->next;
	}
	return (index);
}
