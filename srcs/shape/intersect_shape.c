/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect_shape.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:50:43 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 22:20:09 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "vector.h"
#include "tracing.h"

static double	parse_result(t_intersect_result result, double min, double max)
{
	if (result.first < result.second
			&& result.first > min && result.first < max)
	{
		return (result.first);
	}
	if (result.first > result.second
		&& result.second > min && result.second < max)
	{
		return (result.second);
	}
	return (max + 2);
}

t_hit	intersect_shape(t_ray ray, t_object *shape)
{
	double	closest_result;

	closest_result = parse_result(intersect_sphere(ray, *shape),
			ray.min_length, ray.max_length);
	return ((t_hit){
				.location = vec_add(ray.origin,
						vec_multiply(ray.direction, closest_result)),
				.direction = ray.direction,
				.length = closest_result,
				.collided_shape = shape
			});
}
