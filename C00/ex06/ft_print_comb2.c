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

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a / 10 + '0');
			ft_print(a % 10 + '0');
			write(1, " ", 1);
			ft_print(b / 10 + '0');
			ft_print(b % 10 + '0');
			if (!(a == 98))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}