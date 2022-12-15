/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trace_ray.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:04:19 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 23:08:49 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "scene.h"
#include "shape.h"

unsigned int	trace_ray(t_ray ray)
{
	t_hit	closest_hit;
	t_hit	current_hit;
	int		i;

	closest_hit = (t_hit){.collided_shape = 0,
		.length = MAX_TRACE_LENGTH};
	i = 0;
	while (i < MAX_SHAPES)
	{
		if (get_scene()->shapes[i].type == null)
		{
			i++;
			continue;
		}
		current_hit = intersect_shape(ray, get_scene()->shapes[i]);
		if (current_hit.length < closest_hit.length)
		{
			closest_hit = current_hit;
		}
		i++;
	}
	if (closest_hit.collided_shape == 0)
		return (BACKGROUND_COLOR);
	return (0x0000FFFF);
}
