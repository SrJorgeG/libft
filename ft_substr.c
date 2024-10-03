/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:04:23 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/02 22:31:33 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sd;

	if (start >= ft_strlen(s))
		return ((char *)ft_calloc(1, 1));
	sd = (char *)ft_calloc(sizeof(char), len + 1);
	if (!sd)
		return (NULL);
	while (start--)
		s++;
	return (ft_memcpy(sd, s, len));
}
