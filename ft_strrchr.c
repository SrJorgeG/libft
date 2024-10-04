/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:04:18 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/04 17:00:10 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	cont;

	cont = ft_strlen(s) + 1;
	while ((--cont))
		if ((char)s[cont] == (char)c)
			return ((char *)&s[cont]);
	if ((char)c == s[cont])
		return ((char *)&s[cont]);
	return (NULL);
}

/*
	
	int	i;

	i = ft_strlen(s);
	while (--i)
		if (s[i] == c)
			return (&s[i]);
	return (NULL);
*/
