/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_shape_intersects.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:22:58 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/16 14:52:30 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"

t_intersect_result	get_shape_intersects(t_ray ray, t_shape shape)
{
	if (get_type(&shape) == plane)
		return (intersect_plane(ray, shape));
	if (get_type(&shape) == cylinder)
		return (intersect_cylinder(ray, shape));
	if (get_type(&shape) == cone)
		return (intersect_cone(ray, shape));
	return (intersect_sphere(ray, shape));
}
