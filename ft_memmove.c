/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:53:40 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/09/24 13:33:47 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*z;
	unsigned char	*c;
	size_t			m;

	if (dest == NULL && src == NULL)
		return (dest);
	m = n;
	a = (unsigned char *)src;
	z = (unsigned char *)dest;
	while (n--)
		*c++ = *a++;
	while (m--)
		*z++ = *c++;
	return (dest);
}
