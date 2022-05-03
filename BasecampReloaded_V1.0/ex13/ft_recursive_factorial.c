/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:47:44 by alachris          #+#    #+#             */
/*   Updated: 2022/03/29 03:21:09 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{	
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{		
		nb = nb * ft_recursive_factorial(nb - 1);
	}	
	return (nb);
}
