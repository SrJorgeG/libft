/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:04:14 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/09/29 23:54:16 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*c;

	c = (char *)str;
	i = -1;
	if (!*to_find)
		return (c);
	while (c[++i] != '\0' && i < len)
	{
		j = 0;
		if (c[i] == to_find[j])
			while (to_find[j] != '\0' && c[i + j] == to_find[j])
				j++;
		if (to_find[j] == '\0')
			return (&c[i]);
	}
	return (c);
}
