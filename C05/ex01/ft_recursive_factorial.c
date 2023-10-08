/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:32:16 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/29 16:30:51 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if ((nb == 0) || nb == 1)
	{
		return (1);
	}
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
}

// int main(void)
// {
// 	int number;
// 	int function;

// 	number = 3;
// 	function = ft_recursive_factorial(number);
// 	printf("%d", function);
// }
