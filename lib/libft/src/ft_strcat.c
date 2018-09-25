/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:35:35 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:31:07 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*dst;

	dst = s1;
	dst += ft_strlen(s1);
	ft_strcpy(dst, s2);
	return (s1);
}
