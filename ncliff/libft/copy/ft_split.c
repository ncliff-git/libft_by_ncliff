/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:34:55 by ncliff            #+#    #+#             */
/*   Updated: 2020/11/01 18:36:00 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		num_str(char const *s, char c)
{
	int	i;
	int	pnt;

	i = 0;
	pnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			pnt++;
		i++;
	}
	if (pnt > 0)
		pnt - 1;
	return (pnt);
}

static void	re_split(char **dup, int n)
{
	while(n >= 0)
	{
		free(*dup[n]);
		n--;
	}
	free(**dup);
}

static int	size_str(char const *s, int c, int *p)
{
	int i;

	i = 0;
	while (s[i] != c)
	{
		i++;
	}
	p += (i + 1);
	return (i);
}


char	**ft_split(char const *s, char c)
{
	int 	i;
	int		n;
	int		cnum;
	char	**dup;
	
	i = 0;
	cnum = num_str(s, c);
	dup = (char **)malloc(cnum * sizeof(char *));
	if (dup == NULL)
		return (NULL);
	while (s[i] != c)
		i++;
	i++;
	n = 0;
	while (cnum--)
	{
		dup[n] = (char *)malloc(size_str(s[i], c, i) * sizeof(char)); 
		if (dup[n] == NULL)
			re_split(dup, n);
		n++;
	}
	while ()
}
