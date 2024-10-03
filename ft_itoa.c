/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:37:15 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/03 04:25:10 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int nb)
{
	size_t	cont;

	cont = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		cont++;
	while (nb != 0)
	{
		nb /= 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (!n)
		return (ft_strdup("0"));
	len = ft_intlen(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	s[len] = '\0';
	len--;
	while (n)
	{
		s[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(124));
// 	printf("%s\n", ft_itoa(-23));
// 	printf("%s\n", ft_itoa(-0));
// 	printf("%s\n", ft_itoa(1000034));
// 	return (0);
// }