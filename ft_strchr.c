/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:00:26 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/01 03:43:25 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*sd;

	sd = (char *)s;
	i = 0;
	while (i < ft_strlen(s))
	{
		if (sd[i] == c)
			return (&sd[i]);
		i++;
	}
	if (sd[i] == c)
		return (&sd[i]);
	return (NULL);
}
