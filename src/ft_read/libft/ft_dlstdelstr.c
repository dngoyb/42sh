/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngbanza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 10:12:39 by ngbanza           #+#    #+#             */
/*   Updated: 2017/09/07 10:12:47 by ngbanza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstdelstr(t_dlist **lst)
{
	t_dlist *tmp;

	*lst = ft_dlstgethead(*lst);
	while (*lst)
	{
		tmp = *lst;
		free((*lst)->content);
		*lst = (*lst)->next;
		free(tmp);
	}
}
