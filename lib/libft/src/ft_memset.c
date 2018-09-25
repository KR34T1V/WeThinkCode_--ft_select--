/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 07:55:24 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:31:32 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memset(void *mem, int c, size_t len)
{
	char *ptr;

	if (len == 0)
		return (mem);
	ptr = mem;
	while (len-- > 0)
	{
		*ptr++ = c;
	}
	return (mem);
}
