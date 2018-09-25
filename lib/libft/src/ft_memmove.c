/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 16:34:39 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:31:33 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*strd;
	unsigned char		*strs;

	strd = (unsigned char*)dst;
	strs = (unsigned char*)src;
	if (strs < strd)
	{
		strs += len - 1;
		strd += len - 1;
		while (len--)
			*strd-- = *strs--;
	}
	else
	{
		while (len--)
			*strd++ = *strs++;
	}
	return (dst);
}
