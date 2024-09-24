/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:04:23 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/09/24 01:23:43 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sd;

	sd = (char *)malloc(sizeof(char) * len);
	if (!sd)
		return (NULL);
	while (start--)
		s++;
	return (ft_memcpy(sd, s, len));
}
