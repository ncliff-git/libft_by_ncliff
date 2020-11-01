/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:51:16 by ncliff            #+#    #+#             */
/*   Updated: 2020/11/01 14:11:58 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		trim_test(const char s, char const *set)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (set[i] != '\0')
	{
		if (s == set[i])
			flag++;
		i++;
	}
	if (flag == 0)
		return (0);
	return (1);
}

static char		*copy_to_trim(char const *s1, char *pcs1, int i1, int i2)
{
	int i;

	i = 0;
	pcs1 = (char *)malloc((i2 - i1) * sizeof(char) + 1);
	if (pcs1 == NULL)
		return (NULL);
	while (i != (i2 - i1))
	{
		pcs1[i] = s1[i1 + i];
	}
	pcs1[i] = '\0';
	return (pcs1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*cps1;
	int		lens1;
	int		i;
	int		pnt1;
	int		pnt2;

	cps1 = NULL;
	pnt1 = 0;
	lens1 = ft_strlen(cps1);
	while (lens1-- > 0)
		if (!trim_test(s1[lens1], set))
		{
			pnt2 = lens1;
			write(1, itoa(pnt2), 2);
			break ;
		}
	i = 0;
	while (s1[i++] != '\0')
		if (trim_test(s1[lens1], set))
		{
			pnt1 = i;
			break ;
		}
	return (copy_to_trim(s1, cps1, pnt1, pnt2));
}
