/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:53:06 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/01 05:48:15 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	int				res;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = -1;
	res = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (++i < (int)n && !res)
		res += ((int)(ss1[i] - ss2[i]));
	return (res);
}

/*
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;	
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n && (ss1[i] || ss2[i]))
	{
		if (ss1[i] != ss2[i])
			return ((int)(ss1[i] - ss2[i]));
		i++;
	}
	return (0);
}
	size_t			i;

	i = -1;
	while (++i < n && (s1[i] || s2[i]))
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i] - s2[i]));
	return (0);

*/