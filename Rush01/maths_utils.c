/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <avarricc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:08:03 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/16 23:18:15 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		*args_to_tab(char *args, int size)
{
	int	*tab;
	int	index;

	if (!(tab = malloc(sizeof(int) * 4 * size)))
	{
		err_msg_void();
		return (NULL);
	}
	index = -1;
	while (++index < 4 * size)
		if (args[index * 2] - 48 < size + 1)
			tab[index] = args[index * 2] - 48;
		else
		{
			err_msg_void();
			return (NULL);
		}
	return (tab);
}

int		**initialize_grid(int size)
{
	int	**empty_grid;
	int index;

	index = -1;
	if (!(empty_grid = malloc(sizeof(int*) * size)))
		return (0);
	while (++index < size)
		if (!(empty_grid[index] = malloc(sizeof(int) * size)))
			return (0);
	return (empty_grid);
}
