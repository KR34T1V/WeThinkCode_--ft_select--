/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:14:08 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:30:48 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	lneedle;
	char			*hay;

	lneedle = ft_strlen(needle) - 1;
	hay = (char *)haystack;
	a = 0;
	if (!*needle)
		return (hay);
	while (hay[a] && a < len)
	{
		i = 0;
		if (hay[a] == needle[0])
			while (hay[a + i] == needle[i] && (i + a) < len)
			{
				if (i == lneedle)
					return (&hay[a]);
				i++;
			}
		a++;
	}
	return (NULL);
}
