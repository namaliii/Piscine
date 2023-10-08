/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:08:29 by anamieta          #+#    #+#             */
/*   Updated: 2023/09/03 10:38:13 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_prime(int num)
{
	int	d;

	d = 2;
	if (num <= 1)
	{
		return (0);
	}
	while ((d <= num / d) && (d <= 46340))
	{
		if (num % d == 0)
		{
			return (0);
		}
		d++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next_prime;

	next_prime = nb;
	if (nb <= 1)
	{
		return (2);
	}
	while (is_prime(next_prime) == 0)
	{
		next_prime++;
	}
	return (next_prime);
}

// int main(void)
// {
// 	int num;
// 	int f;
// 	num = 2147483640;
// 	f = ft_find_next_prime(num);
// 	printf("%d", f);
// 	return (0);
// }
