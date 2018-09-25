/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:59:27 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:31:04 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *tdst;

	tdst = dst;
	while (*src)
	{
		*tdst++ = *src++;
	}
	*tdst = '\0';
	return (dst);
}
