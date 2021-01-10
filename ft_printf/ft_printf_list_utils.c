/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_list_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <ncliff@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:26:36 by ncliff            #+#    #+#             */
/*   Updated: 2021/01/10 16:01:53 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_list.h"

t_list			*ft_listnew(void)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->flag = 0;
	new->arg = 0;
	new->acacy = -1;
	new->widht = 0;
	return (new);
}

int				ft_printf_choice(t_list **l_args, va_list args)
{
	if ((*l_args)->arg == 'd' || (*l_args)->arg == 'i')
	{
		return (ft_printf_d(l_args, args, 0));
	}
	else if ((*l_args)->arg == 'X' || (*l_args)->arg == 'x')
	{
		return (ft_printf_h(l_args, args, 0));
	}
	else
	{
		write(1, "##ERROR##", 9);
	}
	return (0);
}

static int		ft_strlen(const char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}

char	*ft_strjoin(char *s1, char *s2, int var)
{
	char	*strjn;
	int		i;
	int		n;

	if (s1 == NULL || s2 == NULL
	|| !(strjn = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		strjn[i] = s1[i];
		i++;
	}
	if (var == 0)
		free(s1);
	n = 0;
	while (s2[n] != '\0')
	{
		strjn[i] = s2[n];
		i++;
		n++;
	}
	free(s2);
	strjn[i] = '\0';
	return (strjn);
}
