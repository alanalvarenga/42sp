/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:54:23 by alachris          #+#    #+#             */
/*   Updated: 2022/02/09 23:33:50 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_to_write(char number1, char number2, char number3);

void	ft_print_comb(	void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_to_write(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

void	ft_to_write(char number1, char number2, char number3)
{
	write(1, &number1, 1);
	write(1, &number2, 1);
	write(1, &number3, 1);
	if (number1 != '7')
	{
		write(1, ", ", 2);
	}				
}
