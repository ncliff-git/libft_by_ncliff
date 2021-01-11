/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <ncliff@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:27:30 by ncliff            #+#    #+#             */
/*   Updated: 2021/01/10 20:07:22 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_list.h"

static char			*ft_utoa(unsigned value, char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	str[i++] = '0' + (value % 10);
	value /= 10;
	while (value > 0)
	{
		str[i++] = '0' + (value % 10);
		value /= 10;
	}
	str[i] = '\0';
	j = 0;
	i--;
	while (j < i)
	{
		c = str[j];
		str[j] = str[i];
		str[i] = c;
		j++;
		i--;
	}
	return (str);
}

int					ft_printf_u(t_list **l_args, va_list args, int point)
{
	char	*num;
	int		i;

	num = malloc(11 * sizeof(char));
	num = ft_utoa(va_arg(args, unsigned int), num);
	while (num[point] != '\0')
		point++;
	if ((*l_args)->acacy > (-1))
	{
		if ((*num) == '0' && (*l_args)->acacy == 0)
			point = 0;
		point = acacy_d((*l_args)->acacy, point, &num);
	}
	if ((*l_args)->widht > point && (*l_args)->flag != '-')
		return (widht_d((*l_args)->widht, point, &num, l_args));
	else if ((*l_args)->widht > point && (*l_args)->flag == '-')
		return (widht_d_minus((*l_args)->widht, point, num));
	else
	{
		i = write(1, num, point);
		free(num);
		return (i);
	}
	return (0);
}
