/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalfar <saalfar@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:00:00 by ataher            #+#    #+#             */
/*   Updated: 2025/07/16 19:58:18 by saalfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Garbage collector aware version of strmapi
 * 
 * @param s Source string
 * @param f Function to apply to each character
 * @return char* Pointer to mapped string, or NULL on failure
 */
char	*gc_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)gc_malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
