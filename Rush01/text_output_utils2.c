/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_output_utils2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <avarricc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 15:26:16 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/16 23:22:39 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	putchar_x_times(char c, int x)
{
	while (x-- > 0)
		ft_putchar(c);
}

void	grid_output(int **grid, __unused int *args, int size)
{
	int i = -1;

	while (++i < size)
	{
		ft_puttab(grid[i], size);
		ft_putchar('\n');
	}
}

int		err_msg_void(void)
{
	ft_putstr("Error\n");
	return (0);
}
