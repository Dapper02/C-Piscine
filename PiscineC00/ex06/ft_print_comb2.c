/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:41:37 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/10/29 11:19:09 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_int(int a)
{
	char *alphabet;

	alphabet = "0123456789";
	write(1, alphabet + a, 1);
}

void	ft_print_nums(int a, int b)
{
	ft_print_int(a);
	ft_print_int(b);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 9)
	{
		while (b <= 9)
		{
			ft_print_nums(a, b);
			write(1, ", ", 2);
			b++;
		}
		b = 0;
		a++;
	}
}
