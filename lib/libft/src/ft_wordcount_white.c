/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount_white.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:07:50 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/21 19:13:11 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t		ft_wordcount_white(const char *s)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	if (!s)
		return (0);
	if (!(ft_isspace(s[i])))
		words++;
	while (s[i] != '\0')
	{
		if (ft_isspace(s[i]))
		{
			while (ft_isspace(s[i]))
				i++;
			if ((!ft_isspace(s[i])) && (s[i] != '\0'))
				words++;
		}
		i++;
	}
	return (words);
}
