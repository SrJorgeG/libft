/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:37:57 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/02 17:01:32 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_chrcounter(char *s, int c)
{
	size_t	cont;
	size_t	i;
	
	cont = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			cont++;
		i++;
	}
	return cont;
}
ft_len()
char	**ft_split(char const *s, char c)
{
	size_t	cont;
	size_t	i;
	size_t	j;
	char **spl;	

	i = 0;
	j = 0;
	cont = ft_chrcounter(s, c);
	while (cont--)
	{
		spl[i] = ft_calloc(, sizeof(char));
	}
	
}