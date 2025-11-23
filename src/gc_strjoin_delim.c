/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_strjoin_delim.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalfar <saalfar@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:00:00 by ataher            #+#    #+#             */
/*   Updated: 2025/07/16 19:56:13 by saalfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins two paths with a delimiter in between
 *
 * @param path1 The first path.
 * @param path2 The second path.
 * @param delim The delimiter.
 * @return The joined path, or NULL if malloc fails.
 *
 * This function takes two paths and joins them with a delimiter in between. The
 * resulting string is malloced and must be freed by the caller.
 */
char *gc_strjoin_delim(char *path1, char *path2, char delim)
{
	char *joined_path = (char *)gc_malloc(ft_strlen(path1) + ft_strlen(path2) + 2);
	if (joined_path == NULL)
		return NULL;
	ft_strlcpy(joined_path, path1, ft_strlen(path1) + 1);
	ft_strlcpy(joined_path + ft_strlen(path1), &delim, 2);
	ft_strlcpy(joined_path + ft_strlen(path1) + 1, path2, ft_strlen(path2) + 1);
	return joined_path;
}
