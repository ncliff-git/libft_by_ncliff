/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:28:54 by ncliff            #+#    #+#             */
/*   Updated: 2020/10/30 15:28:56 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	sizedst;

	sizedst = ft_strlen(src);
	while (dstsize-- > 1)
	{
		*dst = *src;
		dst++;
		src++;
	}
	dst++;
	*dst = '\0';
	return (sizedst);
}
