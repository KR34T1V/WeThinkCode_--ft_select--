/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:55:59 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:30:46 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**str;
	int		a1;
	int		a2;
	int		start;

	a1 = 0;
	a2 = 0;
	str = (char **)ft_memalloc(sizeof(char *) * ft_wordcount(s, c) + 1);
	if (!s || !str || !c)
		return (NULL);
	while (s[a2])
	{
		if (s[a2] == c)
			a2++;
		else
		{
			start = a2;
			while (s[a2] && s[a2] != c)
				a2++;
			str[a1++] = ft_strsub(s, start, a2 - start);
		}
	}
	str[a1] = 0;
	return (str);
}
