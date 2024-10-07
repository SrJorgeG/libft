/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:37:57 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/07 16:09:41 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wlength(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

size_t	ft_chrcounter(const char *s, char c)
{
	size_t	cont;
	size_t	i;

	cont = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cont++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (cont);
}

void	*ft_free(char **spl, int i)
{
	while (i)
		free(spl[--i]);
	free(spl);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**spl;	

	i = 0;
	j = 0;
	spl = malloc(sizeof(char *) * (ft_chrcounter(s, c) + 1));
	if (!spl)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			spl[j] = ft_substr(s + i, 0, ft_wlength(s + i, c));
			if (!spl[j])
				return (ft_free(spl, j));
			j++;
			i += ft_wlength(s + i, c);
		}
		else
			i++;
	}
	spl[j] = NULL;
	return (spl);
}
