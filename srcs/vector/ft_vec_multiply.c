/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_multiply.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:48:43 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 15:17:21 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	ft_vec_multiply(t_vector vector, double multiplier)
{
	return ((t_vector){
		.x = vector.x * multiplier,
		.y = vector.y * multiplier,
		.z = vector.z * multiplier
	});
}
