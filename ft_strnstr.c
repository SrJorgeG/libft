/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:04:14 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/02 00:44:21 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while ((char)str[i] && i < len)
	{
		j = 0;
		while (to_find[j] && (char)str[i + j] == to_find[j] && (i + j) < len)
			j++;
		if (!to_find[j])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
