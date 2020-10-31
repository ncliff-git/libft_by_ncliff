/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 20:09:41 by ncliff            #+#    #+#             */
/*   Updated: 2020/10/30 20:09:47 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int n;
	int pointin;

	i = 0;
	n = 0;
	pointin = 0;
	while (len-- > 0)
	{
		n = 0;
		while (needle[n++] != '\0')
		{
			if (needle[n] != haystack[n + i])
			{
				pointin = 0;
				break;
			}
		}
		if (pointin == 1)
			return ((char *)haystack + pointin);
		i++;
	}
	return (NULL);
}


/*

1) if (!*needle)
  	return ((char *)haystack);
2) пока копия первой строки не дошла до \0
	2.1) 













*/