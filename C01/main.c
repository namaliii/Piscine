/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:28:55 by anamieta          #+#    #+#             */
/*   Updated: 2023/08/20 14:17:28 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include "./ex00/ft_ft.c"
#include "./ex01/ft_ultimate_ft.c"
#include "./ex02/ft_swap.c"
#include "./ex03/ft_div_mod.c"
#include "./ex04/ft_ultimate_div_mod.c"
#include "./ex05/ft_putstr.c"
#include "./ex06/ft_strlen.c"
#include "./ex07/ft_rev_int_tab.c"
#include "./ex08/ft_sort_int_tab.c"

void    ft_ft(int *nbr);
void    ft_ultimate_ft(int *********nbr);
void    ft_swap(int *a, int *b);
void    ft_div_mod(int a, int b, int *div, int *mod);
void    ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	//00
	int f;
    int a;
	int b;
	int div;
	int mod;
	int i;
	f = 44;
	ft_ft(&f);
	printf("ft_ft: %d\n", f);
	//01
    int g = 11;
	int *g1 = &g;
	int **g2 = &g1;
	int ***g3 = &g2;
	int ****g4 = &g3;
	int *****g5 = &g4;
	int ******g6 = &g5;
	int *******g7 = &g6;
	int ********g8 = &g7;
	int *********g9 = &g8;
	ft_ultimate_ft(g9);
	printf("ft_ultimate_ft: %d\n", g);
	//02
    a = 22;
	b = 33;
	ft_swap(&a, &b);
	printf("ft_swap: %d->%d %d->%d\n", 22, a, 33, b);
	//03
	a = 5;
	b = 2;
	div = 1;
	mod = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("ft_div_mod: div = %d mod = %d\n", div, mod);
	//04
    a = 44;
	b = 55;
	ft_ultimate_div_mod(&a, &b);
	printf("ft_ultimate_div_mod: div = %d mod = %d\n", a, b);
	//05
	char message[] = "Hello\n";
	ft_putstr(message);
	//06
	int length = ft_strlen(message);
	printf("Length of the string: %d\n", length);
	//07
    int tab[] = {9, 5, 7, 3};
    int size;
	size = 4;
    ft_rev_int_tab(tab, size);
	printf("ft_rev_int_tab: \n");
	i = 0;
		while(i < size) 
		{
    	printf("%d ", tab[i]);
    	i++;
		}
	printf("\n");
	//08
	size = 6;
	int tab1[] = {9, 5, 7, 2, 6, 3};
    ft_sort_int_tab(tab1, size);
	printf("ft_sort_int_tab:\n");
	i = 0;
    while(i < size)
	{
        printf("%d ", tab1[i]);
		i++;
    }
	printf("\n");
	return 0;
}
