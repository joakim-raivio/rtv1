/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect_shape.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:50:43 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 23:10:07 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "vector.h"
#include "tracing.h"

static double	parse_result(t_intersect_result result, double min, double max)
{
	double	closest;

	closest = max + 2;
	if (result.first > min && result.first < max)
	{
		closest = result.first;
	}
	if (closest > result.second
		&& result.second > min && result.second < max)
	{
		closest = result.second;
	}
	return (closest);
}

t_hit	intersect_shape(t_ray ray, t_object shape)
{
	double	closest_result;

	closest_result = parse_result(intersect_sphere(ray, shape),
			ray.min_length, ray.max_length);
	return ((t_hit){
				.location = vec_add(ray.origin,
						vec_multiply(ray.direction, closest_result)),
				.direction = ray.direction,
				.length = closest_result,
				.collided_shape = &shape
			});
}
