/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:11:27 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:31:05 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_strclr(char *str)
{
	int x;
	int i;

	if (str)
	{
		i = 0;
		x = ft_strlen(str);
		while (i != x)
		{
			str[i] = '\0';
			i++;
		}
	}
}
