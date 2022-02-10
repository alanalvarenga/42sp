/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:17:04 by alachris          #+#    #+#             */
/*   Updated: 2022/02/06 18:06:57 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_col(char a, char b, int x);

void	print_row(char l, int c, int y);

void	rush(int x, int y);

void	rush(int x, int y)
{
	char	letter_1;
	char	letter_2;
	char	col;

	letter_1 = 'o';
	letter_2 = '-';
	col = '|';
	if ((x <= 0) || (y <= 0))
	{
		write(1, "", 1);
	}
	else if (y == 1)
	{
		print_col(letter_1, letter_2, x);
	}
	else
	{
		print_col(letter_1, letter_2, x);
		print_row(col, x, y);
		print_col(letter_1, letter_2, x);
	}	
}
