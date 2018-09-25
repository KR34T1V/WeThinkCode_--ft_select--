/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:41:52 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:31:01 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_striter(char *str, void (*f)(char *))
{
	if (str != NULL && f != NULL)
	{
		while (*str)
			f(str++);
	}
}
