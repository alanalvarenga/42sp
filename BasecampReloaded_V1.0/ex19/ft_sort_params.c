/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:59:47 by alachris          #+#    #+#             */
/*   Updated: 2022/03/31 03:06:23 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_find(int argc, char *argv[])
{
	int	i;
	int	actual;
	int	next;
	int	result;

	i = 1;
	actual = 1;
	next = actual + 1;
	while (i < (argc - 1))
	{
		result = ft_strcmp(argv[actual], argv[next]);
		if (result <= 0)
			actual = actual;
		else if (result > 0)
			actual = next;
		next++;
		i++;
	}
	return (actual);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	small;

	i = 1;
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	else
	{			
		while (i < argc)
		{
			small = ft_find(argc, argv);
			ft_putstr(argv[small]);
			ft_putchar('\n');
			argv[small][0] = 127;
			argv[small][1] = '\0';
			i++;
		}
	}
	return (0);
}
