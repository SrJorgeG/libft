/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:53:24 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/09/24 01:13:17 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*z;

	if (dest == NULL && src == NULL)
		return (dest);
	a = (unsigned char *)src;
	z = (unsigned char *)dest;
	while (n--)
		*(z++) = *(a++);
	return (dest);
}
