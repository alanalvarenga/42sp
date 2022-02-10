/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:51:49 by alachris          #+#    #+#             */
/*   Updated: 2022/02/09 23:32:34 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_to_write(char number1, char number2, char number3, char number4);

void	numbers_right(char num1, char num2, char num3, char num4);

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;
	char	num3;
	char	num4;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	num4 = '1';
	while (num1 <= '9')
	{
		num3 = num1;
		while (num2 <= '9')
		{
			num4 = num2 + 1;
			numbers_right(num1, num2, num3, num4);
			num3 = '0';
			num2++;
		}
		if (num2 >= '9')
		{
			num2 = '0';
			num1++;
		}
	}
}

void	numbers_right(char num1, char num2, char num3, char num4)
{		
	while (num3 <= '9')
	{
		if ((num3 >= num1) || (num1 == '0'))
		{
			while (num4 <= '9')
			{			
				ft_to_write(num1, num2, num3, num4);
				num4++;
			}
			if (num4 > '9')
			{
				num4 = '0';
			}			
		}
		num3++;
	}
}

void	ft_to_write(char number1, char number2, char number3, char number4)
{
	write(1, &number1, 1);
	write(1, &number2, 1);
	write(1, " ", 1);
	write(1, &number3, 1);
	write(1, &number4, 1);
	if (!((number1 == '9') && (number2 == '8') && (number3 == '9')))
	{
		write(1, ", ", 2);
	}
}
