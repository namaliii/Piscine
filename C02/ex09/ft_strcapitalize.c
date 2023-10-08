/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:44:09 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/23 13:19:28 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	is(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (2);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 48 && c <= 57)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (is(str[0]) == 1)
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (is(str[i - 1]) >= 0 && is(str[i]) == 2)
		{
			str[i] = str[i] + 32;
		}
		if (is(str[i - 1]) < 0 && is(str[i]) == 1)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char string[] = "salut, comment tu vas ? 
// 42mots quarante-deux; cinquante+et+un";
// 	ft_strcapitalize(string);
// 	printf("%s", string);
// 	return 0;
// }