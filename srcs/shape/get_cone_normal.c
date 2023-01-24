/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cone_normal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:13:42 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 17:01:50 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "math3d.h"
#include <math.h>

t_vector	get_cone_normal(t_shape cone, t_vector location)
{
	double		axis_distance;
	t_vector	direction;

	axis_distance = vec_distance(cone.object.location, location)
		* sqrt(1 + pow(get_cone_angle(cone), 2));
	direction = cone.object.up;
	if (vec_dot(direction, vec_substract(location, cone.object.location)) < 0)
		direction = vec_multiply(direction, -1);
	return (vec_normalize(vec_substract(location,
				vec_add(cone.object.location,
					vec_multiply(direction, axis_distance)))));
}
