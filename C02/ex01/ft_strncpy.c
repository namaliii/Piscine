/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:29:09 by anamieta          #+#    #+#             */
/*   Updated: 2023/09/05 12:00:03 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{
	unsigned int l;
	char desty[20];
	char source[] = "Buongiorno!";
	l = 7;
	ft_strncpy(desty, source, l);
	printf("%s\n", desty);
	unsigned int l1;
		char desty1[20];
	char source1[] = "Buongiorno!";
	l1 = 7;
	ft_strncpy(desty1, source1, l1);
	printf("%s", desty1);
	return 0;
}