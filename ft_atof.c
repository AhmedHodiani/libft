/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataher <ataher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:44:58 by ataher            #+#    #+#             */
/*   Updated: 2024/11/19 13:13:01 by ataher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(char *str)
{
	double	result;
	int		sign;
	int		dot;

	sign = 1;
	dot = 0;
	result = 0.0;
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (*str == '.')
			dot = 1;
		else if (*str >= '0' && *str <= '9')
		{
			result = (result * 10.0) + (*str - '0');
			if (dot)
				dot *= 10.0;
		}
		str++;
	}
	return ((result / dot) * sign);
}
