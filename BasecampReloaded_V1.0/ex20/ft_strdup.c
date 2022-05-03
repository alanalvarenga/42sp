/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:31:48 by alachris          #+#    #+#             */
/*   Updated: 2022/04/01 22:34:05 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*cpy;

	i = 0;
	if (src != NULL)
	{
		length = ft_strlen(src);
		cpy = (char *) malloc(length + 1);
		while (i < length)
		{
			cpy[i] = src[i];
			i++;
		}
		cpy[i] = '\0';
	}
	return (cpy);
}
