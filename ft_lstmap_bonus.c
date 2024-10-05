/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:14:01 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/05 10:54:17 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*res;
	void	*a;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		a = f(lst->content);
		aux = ft_lstnew(a);
		if (!aux)
		{
			del(a);
			ft_lstclear(&res, del);
			return (res);
		}
		ft_lstadd_back(&res, aux);
		lst = lst->next;
	}
	return (res);
}
