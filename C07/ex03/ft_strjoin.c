/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:31:55 by anamieta          #+#    #+#             */
/*   Updated: 2023/09/06 17:33:20 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	total_length += ft_strlen(sep) * (size - 1) + 1;
	return (total_length);
}

void	concatenate_string(char *result, int size, char **strs, char *sep)
{
	int	count;
	int	length;
	int	k;

	count = 0;
	length = 0;
	k = 0;
	while (count < size)
	{
		length = 0;
		while (strs[count][length])
		{
			result[k++] = strs[count][length++];
		}
		length = 0;
		while (sep[length] && count < size - 1)
		{
			result[k++] = sep[length++];
		}
		count++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	total_length = calculate_total_length(size, strs, sep);
	result = (char *)malloc(total_length);
	if (result == NULL)
	{
		return (NULL);
	}
	concatenate_string(result, size, strs, sep);
	return (result);
}

// int	main()
// {
// 	char *strings[] = {"figs", "bananas", "dates"};
// 	char *separator = " - ";
// 	char *result = ft_strjoin(3, strings, separator);
// 	if (result)
// 	{
// 		printf("My shopping list: %s\n", result);
// 		free(result);
// 	}
// 	return 0;
// }