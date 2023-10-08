/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:33:56 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/31 19:16:57 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
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
	return (0);
}
