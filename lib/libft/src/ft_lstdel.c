/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 10:10:10 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:31:42 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*lstnxt;

	lst = *alst;
	while (lst)
	{
		lstnxt = lst->next;
		del((lst)->content, (*alst)->content_size);
		free(lst);
		lst = lstnxt;
	}
	*alst = NULL;
}
