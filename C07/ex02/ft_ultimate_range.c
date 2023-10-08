/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:47:24 by anamieta          #+#    #+#             */
/*   Updated: 2023/09/06 20:05:59 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// #include <stdio.h>
// int main(void)
// {
// 	int size;
// 	int i = 0;
// 	int *range = NULL;
// 	size = ft_ultimate_range(&range, 1, 10);
// 	if (range != NULL)
// 	{
// 		while (i < size)
// 		{
// 			printf("%d ", range[i]);
// 			i++;
// 		}
// 		free(range);
// 	}
// 	else
// 	{
// 		printf("Invalid range or memory allocation failed.\n");
// 	}
// 	return (0);
// }