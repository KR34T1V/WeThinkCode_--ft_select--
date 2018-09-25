/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:05:37 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:30:58 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;

	ldst = ft_strlen(s1);
	lsrc = ft_strlen(s2);
	if (dstsize <= ldst)
		return (dstsize + lsrc);
	ft_strncat(s1, s2, (dstsize - ldst - 1));
	return (lsrc + ldst);
}
