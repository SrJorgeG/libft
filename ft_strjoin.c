/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:03:52 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/09/24 01:22:57 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sd;

	sd = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!sd)
		return (NULL);
	ft_memcpy(sd, s1, ft_strlen(s1));
	ft_memcpy(sd + ft_strlen(s1), s2, ft_strlen(s1));
	return (sd);
}
