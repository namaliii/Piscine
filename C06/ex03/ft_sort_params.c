/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:17:02 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/31 19:37:19 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print_args(int argc, char **argv)
{
	int	i;
	int	s;

	s = 1;
	while (s < argc)
	{
		i = 0;
		while (argv[s][i] != '\0')
		{
			write(1, &argv[s][i], 1);
			i++;
		}
		write(1, "\n", 1);
		s++;
	}
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		y;
	int		z;

	y = 1;
	while (y < argc - 1)
	{
		z = y + 1;
		while (z < argc)
		{
			if (ft_strcmp(argv[y], argv[z]) > 0)
			{
				temp = argv[y];
				argv[y] = argv[z];
				argv[z] = temp;
			}
			z++;
		}
		y++;
	}
	print_args(argc, argv);
	return (0);
}
