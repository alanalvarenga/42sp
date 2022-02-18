/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:03:32 by alachris          #+#    #+#             */
/*   Updated: 2022/02/17 21:02:07 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

int		ft_is_valid(char *str, int i);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	str = ft_strlowcase(str);
	if (str[0] != '\0' && (str[0] >= 'a' && str[0] <= 'z'))
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{		
		if ((ft_is_valid(str, i -1)) == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	ft_is_valid(char *str, int i)
{
	int	valid;

	valid = 1;
	if ((str[i] >= 'A' && str[i] <= 'Z')
		|| (str[i] >= '0' && str[i] <= '9')
		|| (str[i] >= 'a' && str[i] <= 'z'))
	{
		valid = 0;
	}
	return (valid);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
