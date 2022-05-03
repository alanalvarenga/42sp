/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 03:22:43 by alachris          #+#    #+#             */
/*   Updated: 2022/03/29 03:21:13 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	aux;
	int	result;

	aux = nb;
	result = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 0)
		return (1);
	while (aux > 0)
	{
		result = result * aux;
		aux--;
	}	
	return (result);
}
