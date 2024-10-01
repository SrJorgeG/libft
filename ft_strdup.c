/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:03:45 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/01 06:10:30 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sd;

	sd = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!sd)
		return (NULL);
	return (ft_memcpy(sd, s, ft_strlen(s) + 1));
}
