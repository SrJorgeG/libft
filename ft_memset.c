/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:53:55 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/09/30 00:09:10 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*z;

	z = (unsigned char *)s;
	while (n--)
		*(z++) = (unsigned char)c;
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char buffer1[50];
    char buffer2[50];
    size_t n = 20;
    int value = 'A'; // Valor a establecer

    // Usar ft_memset
    ft_memset(buffer1, value, n);
    
    // Usar memset
    memset(buffer2, value, n);

    // Comparar resultados
    if (memcmp(buffer1, buffer2, n) == 0) {
        printf("ft_memset funciona correctamente.\n");
    } else {
        printf("ft_memset no funciona como se esperaba.\n");
    }

    // Imprimir los buffers para ver el resultado
    printf("Buffer1: %.*s\n", (int)n, buffer1);
    printf("Buffer2: %.*s\n", (int)n, buffer2);

    return 0;
}
*/
