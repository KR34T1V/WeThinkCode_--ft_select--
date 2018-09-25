/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 10:58:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:30:47 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char a;
	char *str;
	char *tmp;

	a = (char)c;
	str = (char *)s;
	tmp = NULL;
	while (*str != '\0')
	{
		if (*str == a)
			tmp = &*str;
		str++;
	}
	if (a == '\0' && *str == '\0')
		tmp = &*str;
	return (tmp);
}
