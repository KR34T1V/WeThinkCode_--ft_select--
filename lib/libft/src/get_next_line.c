/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 11:49:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/21 19:13:06 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static	int	checkloop(int const fd, char **line, char **stat)
{
	char		*temp;
	char		buff[BUFF_SIZE + 1];
	int			bytes_read;

	while (!(ft_iscfound(*stat, '\n')))
	{
		temp = *stat;
		if (((bytes_read = read(fd, buff, BUFF_SIZE)) == 0) &&
				(ft_strlen(*stat) == 0))
			return (0);
		else if (bytes_read == 0 && (ft_strlen(*stat) != 0))
		{
			*line = ft_strsub(*stat, 0, ft_strlen(*stat));
			*stat[0] = '\0';
			return (1);
		}
		buff[bytes_read] = '\0';
		if (bytes_read == -1)
			return (-1);
		if (!(*stat = ft_strjoin(*stat, buff)))
			return (-1);
		free(temp);
	}
	return (2);
}

static int	ft_get_next_line(int const fd, char **line, char **stat)
{
	char		*temp;
	int			rtn;

	if ((rtn = checkloop(fd, line, stat)) < 2)
		return (rtn);
	*line = ft_strsub(*stat, 0, ft_strclen(*stat, '\n'));
	temp = *stat;
	*stat = ft_strsub(*stat, (ft_strclen(*stat, '\n') + 1),
			ft_strlen(*stat));
	free(temp);
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	static t_list	*head = NULL;
	t_list			*lst;

	if (fd < 0 || line == NULL)
		return (-1);
	lst = head;
	while (lst != NULL && lst->content_size != (size_t)fd)
		lst = lst->next;
	if (lst == NULL)
	{
		lst = ft_lstnew("", 1);
		ft_lstadd(&head, lst);
		lst->content_size = fd;
	}
	return (ft_get_next_line(fd, line, (char **)&lst->content));
}

