/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:46:24 by ncliff            #+#    #+#             */
/*   Updated: 2020/10/31 16:46:27 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mlc;

	mlc = malloc(count * size);
	if (!mlc)
		return (NULL);
	ft_memset(mlc, 0, count * size);
	return (mlc);
}
