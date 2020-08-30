/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_output_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 13:50:00 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/16 23:16:25 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 0)
	{
		if (nb / 10 != 0)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_puttab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i++]);
		if (i != size)
			ft_putchar(' ');
	}
}

int		err_msg(int **grid, int *args, int size)
{
	destroy_grid(grid, args, size);
	ft_putstr("Error\n");
	return (0);
}
