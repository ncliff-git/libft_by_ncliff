/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:42:13 by ncliff            #+#    #+#             */
/*   Updated: 2020/10/30 14:42:17 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;

	srcsize = ft_strlen(src) + ft_strlen(dst);
	while (*(dst) != '\0')
	{
		dst++;
		dstsize--;
	}
	while (dstsize-- > 1)
	{
		*dst = *src;
		dst++;
		src++;
	}
	--dstsize;
	*dst = '\0';
	return (srcsize);
}
