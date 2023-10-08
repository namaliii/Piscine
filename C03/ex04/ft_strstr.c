/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:37:05 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/27 15:08:55 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
	{
		return (&str[i]);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

// int main(void)
// {
// 	char string[] = "Ala ma kota, a kot ma Ale!";
// 	char tofind[] = "kot";
// 	char *ptr;
// 	ptr = ft_strstr(string, tofind);
// 	printf("Result of the ft_strstr function: %s\n", ptr);
// 	ptr = strstr(string, tofind);
// 	printf("Result of the strstr function: %s\n", ptr);
// 	return (0);
// }