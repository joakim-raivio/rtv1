/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_ray.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:38:57 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/12 18:04:25 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tracing.h"

t_ray	create_ray(t_vector origin, t_vector direction, double min, double max)
{
	return ((t_ray){
		.origin = origin,
		.direction = direction,
		.min_length = min,
		.max_length = max
	});
}
