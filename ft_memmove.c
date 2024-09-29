/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:53:40 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/09/29 23:34:45 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (s < d && d < s + n)
		while (n--)
			d[n] = s[n];
	else
		while (n--)
			*(d++) = *(s++);
	return (dest);
}

/*
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (s < d && d < s + n)
		while (n--)
			d[n] = s[n];
	else
		while (n--)
			*(d++) = *(s++);
	return (dest);
}
// NO FUNCIONA
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*z;
	unsigned char	*c;
	unsigned char	*d;
	size_t			m;

	m = n;
	a = (unsigned char *)src;
	z = (unsigned char *)dest;
	c = (unsigned char *)src + n;
	d = c;
	if (n && dest == NULL && src == NULL)
	{
		while (n--)
			*(c++) = *(a++);
		while (m--)
			*(z++) = *(d++);
	}
	return (dest);
}







#include <string.h> 
#include <stdio.h>

int main() {
    char src1[] = "Hola, mundo!";
    char dest1[20];
	char src10[] = "Hola, mundo!";
    char dest10[20];

    // Prueba 1: Copiar sin solapamiento
    printf("Prueba 1: Sin solapamiento\n");
	memmove(dest10, src10, strlen(src10) + 1);
    ft_memmove(dest1, src1, strlen(src1) + 1);
    printf("src1: %s\n", src10);
    printf("dest1: %s\n", dest10);
	printf("src1: %s\n", src1);
    printf("dest1: %s\n", dest1);

    // Prueba 2: Copiar con solapamiento (src antes de dest)
    printf("\nPrueba 2: Con solapamiento (src antes de dest)\n");
    char overlap0[] = "1234567890";
	char overlap1[] = "1234567890";
	memmove(overlap0 + 2, overlap0, 8);
    ft_memmove(overlap1 + 2, overlap1, 8);
    printf("Overlap (src antes de dest): %s\n", overlap0);
	printf("Overlap (src antes de dest): %s\n", overlap1);

    // Prueba 3: Copiar con solapamiento (dest antes de src)
    printf("\nPrueba 3: Con solapamiento (dest antes de src)\n");
    char overlap20[] = "ABCDEFGHIJ";
	char overlap2[] = "ABCDEFGHIJ";
    memmove(overlap20, overlap20 + 2, 8);
	ft_memmove(overlap2, overlap2 + 2, 8);
    printf("Overlap (dest antes de src): %s\n", overlap20);
	printf("Overlap (dest antes de src): %s\n", overlap2);

    // Prueba 4: Copiar cero bytes
    printf("\nPrueba 4: Copiar cero bytes\n");
    char test40[] = "No se debe cambiar";
	char test4[] = "No se debe cambiar";
    memmove(test40, test40, 0);
	ft_memmove(test4, test4, 0);
    printf("Sin cambios: %s\n", test40);
	printf("Sin cambios: %s\n", test4);
    return 0;
}
*/
