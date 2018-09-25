/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:12:15 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:31:36 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*str2;
	unsigned const char	*str1;

	str2 = (unsigned char *)dst;
	str1 = (unsigned const char *)src;
	while (n--)
	{
		*str2 = *str1;
		if (*str1 == (unsigned char)c)
			return (++str2);
		str1++;
		str2++;
	}
	return (NULL);
}
