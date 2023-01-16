/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_shape_normal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:26:32 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/16 14:16:12 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"

t_vector	get_shape_normal(t_shape shape, t_hit hit)
{
	if (get_type(&shape) == plane)
		return (get_plane_normal(shape, hit));
	if (get_type(&shape) == cylinder)
		return (get_cylinder_normal(shape, hit.location));
	return (get_sphere_normal(shape, hit.location));
}
