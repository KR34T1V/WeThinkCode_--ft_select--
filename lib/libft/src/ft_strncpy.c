/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:27:35 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:30:53 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char		*tdst;
	size_t		tlen;

	tdst = dst;
	tlen = -1;
	while (++tlen < len && *src)
		*tdst++ = *src++;
	while (tlen++ < len)
		*tdst++ = '\0';
	return (dst);
}
