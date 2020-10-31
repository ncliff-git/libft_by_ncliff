/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:55:20 by ncliff            #+#    #+#             */
/*   Updated: 2020/10/30 13:55:22 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ps;

	ps = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*ps == c)
			return (ps);
		ps++;
	}
	return (NULL);
}
