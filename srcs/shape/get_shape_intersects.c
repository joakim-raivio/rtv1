/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_shape_intersects.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:22:58 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/12 16:33:58 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"

t_intersect_result	get_shape_intersects(t_ray ray, t_shape shape)
{
	if (get_type(&shape) == plane)
		return (intersect_plane(ray, shape));
	return (intersect_sphere(ray, shape));
}
