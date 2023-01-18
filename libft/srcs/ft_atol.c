/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:07:25 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/18 16:34:17 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atol(const char *str)
{
	int				i;
	long long int	result;
	int				sign;

	i = 0;
	result = 0;
	while (ft_iswhitespace(*str))
		str++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
		sign = (str[i++] - 44) * -1;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - 48);
	return ((long int)result * sign);
}
