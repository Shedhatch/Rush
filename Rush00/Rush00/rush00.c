/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 16:58:48 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/09 21:26:24 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x, char angle, char horiz, char vertic)
{
	int largeur;

	largeur = 1;
	while (largeur <= x)
	{
		if (largeur == 1)
			ft_putchar(angle);
		else if (largeur == x)
			ft_putchar(horiz);
		else
			ft_putchar(vertic);
		largeur++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int hauteur;

	hauteur = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (hauteur <= y)
	{
		if (hauteur == 1)
			ft_print_line(x, 'o', 'o', '-');
		else if (hauteur == y)
			ft_print_line(x, 'o', 'o', '-');
		else
			ft_print_line(x, '|', '|', ' ');
		hauteur++;
	}
}
