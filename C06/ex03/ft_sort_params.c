/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:52:17 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/08 19:12:22 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	printar(char *palavra)
{
	int i;

	i = 0;
	while (palavra[i] != '\0')
		i++;
	write(1, palavra, i);
}

void	trocar(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	verificar(int num, char **arg)
{
	int	a;
	int c;
	int flag;

	a = 1;
	while (a < num - 1)
	{
		c = 0;
		flag = 1;
		while (flag == 1 && arg[a][c] != '\0' && arg[a + 1][c] != '\0')
		{
			if (arg[a][c] > arg[a + 1][c])
			{
				trocar(&arg[a], &arg[a + 1]);
				flag = 0;
			}
			c++;
		}
		a++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		verificar(argc, argv);
		i++;
	}
	i = 1;
	while (i < argc)
	{
		printar(argv[i]);
		i++;
	}
	return (0);
}

