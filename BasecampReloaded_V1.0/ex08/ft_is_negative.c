/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 00:46:45 by alachris          #+#    #+#             */
/*   Updated: 2022/03/26 00:47:45 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	result;

	if (n < 0)
	{
		result = 'N';
	}
	if (n >= 0)
	{
		result = 'P';
	}
	ft_putchar(result);
}
