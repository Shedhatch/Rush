/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <avarricc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 16:21:05 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/16 23:22:32 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	destroy_grid(int **grid, int *args, int size)
{
	while (--size)
		free(grid[size]);
	free(grid);
	free(args);
}

int		check(int **grid, int *args, struct s_position pos)
{ 
	if(number_is_valid(grid, pos) == 0)
		return (0);
	if (pos.y == pos.size - 1)
	{
		if (row_solved_right(grid, args, pos.size, pos.x) == 0)
			return (0);
		if (row_solved_left(grid, args, pos.size, pos.x) == 0)
			return (0);
	}
	if (pos.x == pos.size - 1)
	{
		if (col_solved_down(grid, args, pos.size, pos.y) == 0)
			return (0);
		if (col_solved_up(grid, args, pos.size, pos.y) == 0)
			return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int					size;
	int					*args;
	int					**grid;
	struct s_position	pos;

	size = check_args(argc, argv[1]);
	if (!size)
		return (err_msg_void());
	args = args_to_tab(argv[1], size);
	if (!args)
		return (0);
	grid = initialize_grid(size);
	if (!grid)
		return (err_msg_void());
	pos.x = 0;
	pos.y = 0;
	pos.size = size;
	while (solving_algo(grid, args, pos) == 0)
		return (err_msg(grid, args, size));
	grid_output(grid, args, size);
	destroy_grid(grid, args, size);
	return (1);
}
