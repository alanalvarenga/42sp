/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 02:13:29 by alachris          #+#    #+#             */
/*   Updated: 2022/02/10 14:57:57 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int nb);

void	ft_putnbr(int nb)
{
	char	valor;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}	
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}			
	if ((nb >= 0) && (nb <= 9))
	{
		valor = nb + 48;
		write(1, &valor, 1);
	}
	if (nb > 9)
	{
		ft_print_numbers(nb);
	}
}

void	ft_print_numbers(int nb)
{
	char	valor;
	char	order[10];
	int		count;
	int		expo;

	count = 0;
	expo = nb;
	while (expo != 0)
	{						
		valor = (expo % 10) + 48;
		order[count] = valor;
		expo = expo / 10;
		count++;
	}
	count--;
	while (count >= 0)
	{
		write(1, &order[count], 1);
		count--;
	}
}

int main (void)
{
	ft_putnbr (-12); // testar 2.147.483.647 e tbm o negativo - 2.147.483.648

	write(1, "\n", 1);

	return 0; 
}