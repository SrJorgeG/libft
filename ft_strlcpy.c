/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:23:09 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/09/30 00:43:04 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(src);
	if (size)
	{
		while ((i < size - 1) && (src[i]))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (l);
}

/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
	unsigned char	*a;
	unsigned char	*z;

	if (dest == NULL && src == NULL)
		return (dest);
	a = (unsigned char *)src;
	z = (unsigned char *)dest;
	while (n--)
		*(z++) = *(a++);
	return (dest);
*/
