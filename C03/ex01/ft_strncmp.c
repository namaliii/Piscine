/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:03:04 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/25 11:41:49 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
	{
		return (0);
	}
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	unsigned int l;
// 	unsigned int o;
// 	unsigned int w;
// 	char str1[] = "";
// 	char str2[] = "A";

// 	l = 2;
// 	o = strncmp(str1, str2, l);
// 	w = ft_strncmp(str1, str2, l);
// 	printf("Expected result: %d\n", o);
// 	printf("Result of ft_strncmp: %d\n", w);
// 	return (0);
// }