/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect_plane.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:46:23 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:16:41 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "math3d.h"
#include "libft.h"

/*
 * Calculates the planes intersection point. Uses a double sided plane collision.
*/

t_intersect_result	intersect_plane(t_ray ray, t_shape plane)
{
	double		denominator;
	t_vector	delta;
	double		length;

	denominator = vec_dot(ray.direction, get_up_vector(&plane));
	length = ray.max_length + 2;
	if (ft_dblabs(denominator) > 0.0001)
	{
		delta = vec_substract(get_location(&plane), ray.origin);
		length = vec_dot(delta, get_up_vector(&plane)) / denominator;
	}
	return ((t_intersect_result){
		.first = length,
		.second = ray.max_length + 2
	});
}
