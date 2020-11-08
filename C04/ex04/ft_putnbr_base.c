/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:39:27 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/08 21:02:40 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_check_base(char *base)
{
	int i;
	int z;

	i = 0;
	z = 0;
	while (base[i] != '\0')
	{
		if ((base[0] == '\0' || base[1] == '\0') || (base[i] == '+' || base[i] == '-'))
		{
			return (0);
		}
		while (base[z] != '\0')
		{
			if (base[z] == base[i])
			{
				return (0);
				z++;
			}
		}
		i++;
	}
	return (1);

}

void	ft_putchar(char base)
{
	write(1, &base, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i = 0;
	int size = 0;

	if (ft_check_base(base))
	{
		if (nbr < 0)
		{
			nbr =-nbr;
			ft_putchar('-');
		}
		while (base[size] != '\0')
		{
			size++;
		}
		while (nbr != '\0' && i >= 0)
		{
			ft_putchar(base[nbr % size]);
			ft_putchar(base[nbr / size]);
			i--;
		}
	}
}

int main(void)
{
	char c;

	ft_putnbr_base(2, "abcde");
	return (0);
}
