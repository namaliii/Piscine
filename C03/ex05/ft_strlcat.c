/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:09:56 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/27 20:06:26 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	destlen;
	unsigned int	i;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	i = 0;
	if (destlen >= size)
	{
		return (srclen + size);
	}
	while ((src[i] != '\0') && ((destlen + i + 1) < size))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

// int main(void)
// {
// 	char source[] = "work?";
// 	char desty[50] = "Does that even ";
// 	unsigned int s;
// 	unsigned int r;
// 	s = 20;
// 	r = ft_strlcat(desty, source, s);
// 	printf("%s\n", desty);
// 	printf("%d\n", r);
// 	char source1[] = "work?";
// 	char desty1[50] = "Does that even ";
// 	r = strlcat(desty1, source1, s);
// 	printf("%s\n", desty1);
// 	printf("%d\n", r);
// 	return (0);
// }