/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:30:56 by ncliff            #+#    #+#             */
/*   Updated: 2020/11/01 11:31:08 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*retstr;

	i = 0;
	if (s == NULL)
		return (NULL);
	retstr = (char *)malloc(len * sizeof(char) + 1);
	if (start > ft_strlen(s))
		return (retstr);
	if (retstr == NULL)
		return (NULL);
	while (len-- > 0 && s[start + i] != '\0')
	{
		retstr[i] = s[start + i];
		i++;
	}
	retstr[i] = '\0';
	return (retstr);
}
