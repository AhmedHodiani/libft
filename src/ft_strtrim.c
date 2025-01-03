/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataher <ataher@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:03:58 by ataher            #+#    #+#             */
/*   Updated: 2025/01/04 02:44:37 by ataher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		prefix_index;
	int		suffix_index;
	char	*str;

	prefix_index = 0;
	suffix_index = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[prefix_index]) && s1[prefix_index])
		prefix_index++;
	while (ft_strchr(set, s1[suffix_index]) && suffix_index > prefix_index)
		suffix_index--;
	str = malloc(sizeof(char) * (suffix_index - prefix_index + 2));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + prefix_index, suffix_index - prefix_index + 2);
	return (str);
}
