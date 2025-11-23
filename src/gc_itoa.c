/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalfar <saalfar@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:00:00 by ataher            #+#    #+#             */
/*   Updated: 2025/07/16 19:57:10 by saalfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int b)
{
	int	len;

	len = 0;
	if (b <= 0)
	{
		b *= -1;
		len++;
	}
	while (b > 0)
	{
		len++;
		b /= 10;
	}
	return (len);
}

/**
 * @brief Garbage collector aware version of itoa
 * 
 * @param n Integer to convert
 * @return char* Pointer to string representation, or NULL on failure
 */

char	*gc_itoa(int n)
{
	int		b;
	int		i;
	char	*s;

	if (n != 0 && n != -2147483648)
		s = gc_malloc(int_len(n) + 1);
	else if (n == -2147483648)
		return (gc_strdup("-2147483648"));
	else if (n == 0)
		return (gc_strdup("0"));
	i = int_len(n);
	b = n;
	if (n < 0 && s != NULL)
	{
		s[0] = '-';
		b = n * -1;
	}
	while (b > 0 && --i >= 0 && n != -2147483648 && n != 0 && s != NULL)
	{
		s[i] = ((b % 10) + '0');
		b = b / 10;
	}
	if (n != 0 && n != -2147483648 && s != NULL)
		s[int_len(n)] = '\0';
	return (s);
}
