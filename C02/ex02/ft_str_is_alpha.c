/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 16:31:40 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/06 15:47:16 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int n;
	int a;

	a = 0;
	n = 0;
	if (str[n] == '\0')
		a = 1;
	while (str[n] != '\0')
	{
		if ((64 < str[n] && str[n] < 91) || (96 < str[n] && str[n] < 123))
		{
			a = 1;
		}
		else if ((97 > str[n] || str[n] > 122) || (65 > str[n] || str[n] > 90))
		{
			return (0);
		}
		n++;
	}
	return (a);
}
