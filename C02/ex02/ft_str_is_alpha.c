/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:16:50 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/01 17:51:34 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int count = 0;

	while(str[count] != '\0')
	{
		if((str[count] <= 'A' || str[count] >= 'Z') && (str[count] <= 'a' || str[count] >='z'))
		{
			return (1);
			count++;
		}
	}
	return (0);
}


int main()
{
 char str[] = "s131hrt";
// char to_find[] = "asdf";
// unsigned int n = 3;

 printf("%d", ft_str_is_alpha(str));

 return(0);
}
