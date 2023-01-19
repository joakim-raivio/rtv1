/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:24:26 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/19 18:40:56 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atod(const char *str)
{
	double	whole;
	double	fraction;

	if (!str)
		return(0);
	whole = ft_atol(str);
	while (*str && *str != ',' && *str != '.')
		str++;
	if (*str == ',' || *str == '.')
		str++;
	fraction = ft_atol(str);
	if (fraction > 1)
		fraction /= 10;
	if (whole < 0)
		fraction *= -1;
	return (whole + fraction);
}
