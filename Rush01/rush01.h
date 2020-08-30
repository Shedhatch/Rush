/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <avarricc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:08:27 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/16 23:22:20 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

struct	s_position {
	int x;
	int y;
	int size;
};

void	ft_putstr(char *str);
int		err_msg(int **grid, int *args, int size);
int		err_msg_void(void);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_puttab(int *tab, int size);
int		*args_to_tab(char *args, int size);
int		**initialize_grid(int size);
void	grid_output(int	**grid, int *args, int size);
void	putchar_x_times(char c, int x);
void	destroy_grid(int **grid, int *args, int size);
int		check_args(int argc, char *args);
int		solving_algo(int **grid, int *args, struct s_position pos);
int		check(int **grid, int *args, struct s_position pos);
int		number_is_valid(int **grid, struct s_position pos);
int		row_solved_left(int **grid, int *args, int size, int row);
int		row_solved_right(int **grid, int *args, int size, int row);
int		col_solved_up(int **grid, int *args, int size, int col);
int		col_solved_down(int **grid, int *args, int size, int col);

#endif
