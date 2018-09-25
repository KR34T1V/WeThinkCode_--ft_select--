/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:25:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/26 13:31:02 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strdup(const char *s1)
{
	char *strd;

	strd = ft_strnew(ft_strlen(s1));
	if (strd == NULL)
		return (NULL);
	ft_strcpy(strd, s1);
	return (strd);
}
