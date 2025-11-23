/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalfar <saalfar@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:00:00 by ataher            #+#    #+#             */
/*   Updated: 2025/07/16 19:57:54 by saalfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Garbage collector aware version of strjoin
 * 
 * @param s1 First string
 * @param s2 Second string
 * @return char* Pointer to joined string, or NULL on failure
 */
char	*gc_strjoin(char const *s1, char const *s2)
{
	size_t	n;
	size_t	i;
	size_t	t;
	char	*ptr;

	n = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	t = 0;
	ptr = gc_malloc(n + 1);
	if (ptr != NULL)
	{
		while (i < ft_strlen(s1))
		{
			ptr[i] = s1[i];
			i++;
		}
		while (t < ft_strlen(s2))
		{
			ptr[i] = s2[t];
			t++;
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
