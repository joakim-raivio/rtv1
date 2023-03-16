/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trace_ray.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:04:19 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:22:58 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"
#include "scene.h"
#include "shape.h"

/*
 * For a given ray, check for intersections between all shapes, and return a hit
 * with the closest one.
*/

t_hit	trace_ray(t_ray ray)
{
	t_hit	closest_hit;
	t_hit	current_hit;
	int		i;

	closest_hit = (t_hit){.collided_shape = 0,
		.length = ray.max_length + 1};
	i = 0;
	while (i < MAX_SHAPES)
	{
		if (get_scene()->shapes[i].object.type == null)
		{
			i++;
			continue ;
		}
		current_hit = intersect_shape(ray, &(get_scene()->shapes[i]));
		if (current_hit.length < closest_hit.length)
		{
			closest_hit = current_hit;
		}
		i++;
	}
	return (closest_hit);
}
