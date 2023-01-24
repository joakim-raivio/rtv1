/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect_shape.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:50:43 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 17:12:05 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "math3d.h"
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

t_hit	intersect_shape(t_ray ray, t_shape *shape)
{
	t_hit	hit_result;

	hit_result.length = parse_result(get_shape_intersects(ray, *shape),
			ray.min_length, ray.max_length);
	if (hit_result.length > ray.max_length
		|| hit_result.length < ray.min_length)
		return (hit_result);
	hit_result.location = vec_add(ray.origin,
			vec_multiply(ray.direction, hit_result.length));
	hit_result.direction = ray.direction;
	hit_result.collided_shape = (t_object *)shape;
	hit_result.normal = get_shape_normal(*shape, hit_result);
	return (hit_result);
}
