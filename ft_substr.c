/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataher <ataher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:21:25 by mdarawsh          #+#    #+#             */
/*   Updated: 2024/09/07 11:05:10 by ataher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (start >= ft_strlen(s))
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	ptr = malloc(len + 1);
	if (ptr == NULL || s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
//      s       start           len

//      ""        1               0

//      ""        1               1

//      ""        0               0

//      ""        0               1
