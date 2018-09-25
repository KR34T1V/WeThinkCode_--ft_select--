/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:07:50 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:30:35 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_wordcount(const char *s, char c)
{
	unsigned int	words;
	unsigned int	i;

	words = 0;
	i = 0;
	if (!s || !c)
		return (0);
	if (s[i] != c)
		words++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			words++;
		}
		i++;
	}
	return (words);
}
