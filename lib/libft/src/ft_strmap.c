/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 07:58:41 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:30:56 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		new = ft_strnew(ft_strlen(s));
		if (!s || !f || !new)
			return (NULL);
		while (s[i])
		{
			new[i] = (*f)(s[i]);
			i++;
		}
		return (new);
	}
	return (NULL);
}
