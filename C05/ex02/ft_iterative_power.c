/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:23:43 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/31 12:37:23 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}

// int main(void)
// {
// 	int num;
// 	int pow;
// 	int r;

// 	num = 2;
// 	pow = 3;
// 	r = ft_iterative_power(num, pow);
// 	printf("%d", r);
// 	return (0);	
// }
