/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 03:40:56 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/09/24 12:38:46 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*sd;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	sd = (char *)s1;
	if (!ft_strchr(set, sd[i--]) && !ft_strrchr(set, sd[j--]))
	{
		ft_bzero((void *)&s1[j], 1);
		ft_bzero((void *)&s1[i], 1);
		return (&sd[i]);
	} else
		ft_strtrim(++s1, set);			
}

/*
int main() {
    const char *str = "   Hello, World!   ";
    const char *set = " ";
    
    char *trimmed = ft_strtrim(str, set);
    
    if (trimmed) {
        printf("Original: '%s'\n", str);
        printf("Trimmed: '%s'\n", trimmed);
    } else {
        printf("Error trimming the string.\n");
    }

    return 0;
}
*/
