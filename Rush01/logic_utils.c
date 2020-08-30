/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <avarricc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 17:29:43 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/16 23:09:25 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_char_check(char c)
{
	return (
		(c == 0) * -1 +
		(c > 47 && c < 58) +
		(c > 64 && c < 91) * 2 +
		(c > 96 && c < 123) * 3 +
		(c == 43 || c == 45) * 4 +
		(c == 32) * 5);
}

int	check_args(int argc, char *args)
{
	int	num_count;
	int	spaces;

	num_count = 0;
	spaces = 0;
	if (argc != 2)
		return (0);
	while (args[num_count + spaces])
	{
		if (ft_char_check(args[num_count + spaces] != 1))
			return (0);
		num_count++;
		if (args[num_count + spaces] == 0)
			return (num_count / 4 * !(num_count % 4));
		if (args[num_count + spaces] != 32)
			return (0);
		spaces++;
	}
	return (0);
}
