/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:56:16 by alachris          #+#    #+#             */
/*   Updated: 2022/02/15 23:36:23 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	count;

	count = 0;
	size = size -1;
	while (count <= size)
	{
		aux = tab[count];
		tab[count] = tab[size];
		tab[size] = aux;
		count++;
		size--;
	}
}
