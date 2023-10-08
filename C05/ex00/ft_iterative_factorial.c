/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:56:18 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/29 16:45:51 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (nb > 1)
		{
			fac = fac * nb;
			nb--;
		}
		return (fac);
	}
}

// int main(void)
// {
// 	int num;
// 	int f;

// 	num = 5;
// 	f = ft_iterative_factorial(num);	
// 	printf("%d", f);
// 	return 0;
// }