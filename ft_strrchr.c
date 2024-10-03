/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:04:18 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/03 06:56:49 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*sd;

	sd = (char *)s;
	i = ft_strlen(s);
	while (i)
	{
		if (sd[i] == c)
			return (&sd[i]);
		i--;
	}
	if (sd[i] == c)
		return (&sd[i]);
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
