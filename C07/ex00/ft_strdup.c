/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:28:47 by anamieta          #+#    #+#             */
/*   Updated: 2023/09/05 16:25:21 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copy;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	copy = (char *)malloc(len + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
// #include <stdio.h>
// int main(void)
// {
// 	char original[] = "Copy that, man eyyy";
// 	char *mydup;
// 	char *dup;
// 	mydup = ft_strdup(original);
// 	dup = strdup(original);
// 	printf("%s\n", mydup);
// 	free(mydup);
// 	printf("%s\n", dup);
// 	return(0);
// }