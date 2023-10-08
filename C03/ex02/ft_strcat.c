/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:48:00 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/26 20:52:51 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char desty[20] = "Hola, ";
// 	char source[] = "chicos!";
// 	char *ptr;
// 	ptr = ft_strcat(desty, source);
// 	printf("Result of the ft_strcat: %s\n", ptr);
// 	printf("Destination string after using ft_strcat: %s\n", desty);
// 	char desty1[20] = "Hola, ";
// 	char source1[] = "chicos!";
// 	ptr = strcat(desty1, source1);
// 	printf("Result of the strcat: %s\n", ptr);
// 	printf("Destination string after using strcat: %s\n", desty);
// 	return (0);
// }