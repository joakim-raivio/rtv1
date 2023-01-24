/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_to_vec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:26:55 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 16:35:21 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"
#include <math.h>

t_vector	rot_to_vec(t_rotation rotation)
{
	return ((t_vector){
		.x = cos(rotation.pitch) * sin(rotation.yaw),
		.y = cos(rotation.pitch) * cos(rotation.yaw),
		.z = sin(rotation.pitch)
	});
}
