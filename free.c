/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucapik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 10:55:17 by jucapik           #+#    #+#             */
/*   Updated: 2019/02/08 11:07:37 by jucapik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "filler.h"

void		free_board(t_board *b)
{
	int		i;

	i = 0;
	while (b->val[i] != NULL)
		free(b->val[i++]);
	free(b->val);
	free(b);
}

void		free_piece(t_piece *p)
{
	free(p->pos);
	free(p);
}
