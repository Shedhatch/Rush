/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 17:50:26 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/09 21:26:47 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x, char slash, char bkslash, char star)
{
	int largeur;

	largeur = 1;
	while (largeur <= x)
	{
		if (largeur == 1)
			ft_putchar(slash);
		else if (largeur == x)
			ft_putchar(bkslash);
		else
			ft_putchar(star);
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
			ft_print_line(x, '/', '\\', '*');
		else if (hauteur == y)
			ft_print_line(x, '\\', '/', '*');
		else
			ft_print_line(x, '*', '*', ' ');
		hauteur++;
	}
}
