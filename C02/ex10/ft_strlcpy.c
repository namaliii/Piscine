/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:39:56 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/24 17:25:41 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

// int	main(void)
// {
// 	char desty[20];
// 	char source[] = "Now I am a criminal";
// 	unsigned int sdest = sizeof(desty);
// 	unsigned int lensrc = ft_strlcpy(desty, source, sdest);
// 	printf("Copied string: %s\n", desty);
// 	printf("Length of the source string: %u", lensrc);
// 	return 0;
// }