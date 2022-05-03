/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:43:38 by alachris          #+#    #+#             */
/*   Updated: 2022/04/03 02:36:10 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int	*ft_range(int min, int max)
{
	int	*numbers;
	int	length;
	int	i;

	if (min >= max)
		return (numbers = NULL);
	i = 0;
	length = (max - min);
	numbers = (int *) malloc(length * 4);
	while (min < max)
	{
		numbers[i] = min;
		i++;
		min++;
	}
	return (numbers);
}
