/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_collision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:44:43 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:22:08 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tracing.h"

/*
 * Linetrace between two points.
*/

t_hit	line_collision(t_vector from, t_vector to)
{
	t_vector	direction;
	double		length;
	t_ray		ray;

	direction = vec_normalize(vec_substract(to, from));
	length = vec_length(vec_substract(from, to));
	ray = create_ray(from, direction, 0, length);
	return (trace_ray(ray));
}
