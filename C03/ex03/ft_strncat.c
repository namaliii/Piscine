/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:21:11 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/27 11:45:40 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j == nb)
		{
			dest[i] = '\0';
			return (dest);
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	 main(void)
// {
// 	char desty[50] = "Hello, ";
// 	char source[] = "world!";
// 	char *ptr;
// 	unsigned int l;
// 	l = 6;
// 	ptr = ft_strncat(desty, source, l);
// 	printf("Result of the ft_strncat function: %s\n", ptr);
// 	printf("Destination string in that function: %s\n", desty);
// 	char desty1[50] = "Hello, ";
// 	char source1[] = "world!";
// 	ptr = strncat(desty1, source1, l);
// 	printf("Result of the strncat function: %s\n", ptr);
// 	printf("Destination string in that function: %s\n", desty1);
// 	return (0);
// }