/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <avarricc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 21:35:55 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/16 23:20:05 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	col_solved_down(int **grid, int *args, int size, int col)
{
	int	i;
	int j;
	int	count_down;

	i = 0;
	j = 0;
	count_down = 1;
	while (++j < size)
		if (grid[i][col] < grid[j][col])
		{
			count_down++;
			i = j;
		}
	if (count_down == args[col])
		return (1);
	return (0);
}

int	col_solved_up(int **grid, int *args, int size, int col)
{
	int	i;
	int j;
	int	count_up;

	i = size - 1;
	j = i;
	count_up = 1;
	while (--j > -1)
		if (grid[i][col] < grid[j][col])
		{
			count_up++;
			i = j;
		}
	if (count_up == args[col + size])
		return (1);
	return (0);
}

int	row_solved_right(int **grid, int *args, int size, int row)
{
	int	i;
	int j;
	int	count_right;

	i = 0;
	j = 0;
	count_right = 1;
	while (++j < size)
		if (grid[row][j] > grid[row][i])
		{
			count_right++;
			i = j;
		}
	if (count_right == args[row + 2 * size])
		return (1);
	return (0);
}

int	row_solved_left(int **grid, int *args, int size, int row)
{
	int	i;
	int j;
	int	count_left;

	i = size - 1;
	j = i;
	count_left = 1;
	while (--j > -1)
		if (grid[row][j] > grid[row][i])
		{
			count_left++;
			i = j;
		}
	if (count_left == args[row + 3 * size])
		return (1);
	return (0);
}

int	number_is_valid(int **grid, struct s_position pos)
{
	int i;

	i = pos.x;
	while (--i > -1)
		if (grid[pos.x][pos.y] == grid[i][pos.y])
			return (0);
	i = pos.y;
	while (--i > -1)
		if (grid[pos.x][pos.y] == grid[pos.x][i])
			return (0);
	return (1);
}
