/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 22:17:37 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/08 17:29:21 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 91 && str[i] > 64) && (i != 0))
		{
			str[i] = str[i] + 32;
			i = 0;
		}
		else if (str[i] < 123 && str[i] > 96)
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (str[i - 1] < 48 || str[i - 1] > 122)
				str[i] = str[i] - 32;
			else if (str[i - 1] < 65 && str[i - 1] > 57)
				str[i] = str[i] - 32;
			else if (str[i - 1] < 97 && str[i - 1] > 90)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
