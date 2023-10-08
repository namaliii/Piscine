/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:49:48 by anamieta          #+#    #+#             */
/*   Updated: 2023/09/06 13:31:48 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	i = 0;
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (min >= max)
	{
		return (NULL);
	}
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

// #include<stdio.h>
// int main(void)
// {
// 	int i;
// 	int min;
// 	int max;
// 	int *range;

// 	i = 0;
// 	min = 2;
// 	max = 10;
// 	range = ft_range(min, max);
// 	if (range != NULL)
// 	{
// 		while (i < max - min)
// 		{
// 			printf("%d ", range[i]);
// 			i++;
// 		}
// 		free(range);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");	
// 	}
// 	return (0);
// }