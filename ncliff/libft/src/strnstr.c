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

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (len-- > 0)
	{
		if (ft_strlen(needle) - 1 > len)
			return (NULL);
		if (ft_strncmp(haystack + i, needle, ft_strlen(needle) - 1) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
