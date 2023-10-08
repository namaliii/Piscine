/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:00:30 by anamieta          #+#    #+#             */
/*   Updated: 2023/09/03 10:38:26 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	d;

	d = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (d <= nb / d)
	{
		if (d * d == nb)
		{
			return (d);
		}
		d++;
	}
	return (0);
}

// int main(void)
// {
// 	int number;
// 	int f;
// 	number = 2147395600;
// 	f = ft_sqrt(number);
// 	printf("%d", f);
// 	return (0);
// }