/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <avarricc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 19:27:55 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/16 23:12:49 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

struct	s_position	next_pos(struct s_position pos)
{
	if (pos.y + 1 == pos.size)
	{
		pos.y = 0;
		pos.x++;
	}
	else
		pos.y++;
	return (pos);
}

int					solving_algo(int **grid, int *args, struct s_position pos)
{
	int i;

	i = 0;
	while (++i <= pos.size)
	{
		grid[pos.x][pos.y] = i;
		if (check(grid, args, pos))
		{
			if (pos.x == pos.size - 1 && pos.y == pos.size - 1)
				return (1);
			else if (solving_algo(grid, args, next_pos(pos)))
				return (1);
		}
		else
			grid[pos.x][pos.y] = 0;
	}
	return (0);
}
