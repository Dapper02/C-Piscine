/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:17:42 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/06 19:35:51 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*h;
	unsigned char	p;
	unsigned char	h1;
	unsigned char	h2;

	h = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		p = str[i];
		if (p < 32 || p > 126)
		{
			h1 = h[p / 16];
			h2 = h[p % 16];
			ft_putchar('\\');
			ft_putchar(h1);
			ft_putchar(h2);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
