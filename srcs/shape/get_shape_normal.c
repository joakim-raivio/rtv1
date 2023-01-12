/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_shape_normal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:26:32 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/12 17:29:02 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"

t_vector	get_shape_normal(t_shape shape, t_hit hit)
{
	if (get_type(&shape) == plane)
		return (get_plane_normal(shape, hit));
	return (get_sphere_normal(shape, hit.location));
}
