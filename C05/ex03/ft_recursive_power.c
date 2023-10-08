/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:50:01 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/31 12:37:02 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return ((ft_recursive_power(nb, power - 1)) * nb);
	}
}

// int main(void)
// {
// 	int p;
// 	int f;
// 	p = 5; 
// 	f = ft_recursive_power(2, p);
// 	printf("%d", f);
// 	return 0;
// }