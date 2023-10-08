/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:41:24 by anamieta          #+#    #+#             */
/*   Updated: 2023/09/03 10:37:11 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	d;

	d = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (d <= nb / d)
	{
		if (nb % d == 0)
		{
			return (0);
		}
		d++;
	}
	return (1);
}

// int main(void)
// {
// 	int num;
// 	int f;

// 	num = 2147483647;
// 	f = ft_is_prime(num);
// 	printf("%d", f);
// 	return (0);
// }
