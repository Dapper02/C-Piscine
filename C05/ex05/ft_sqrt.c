/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 22:19:17 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/06 20:33:25 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i = 0;

	if (i < nb)
	{
		if(i * i == nb)
		{
			return (i);
		}
		i++
	}
	return (0);
}
