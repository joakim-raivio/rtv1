/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_to_vec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:26:55 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 15:10:51 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <math.h>

t_vector	rot_to_vec(t_rotation rotation)
{
	return ((t_vector){
			.x = cos(rotation.pitch) * sin(rotation.yaw),
			.y = cos(rotation.pitch) * cos(rotation.yaw),
			.z = sin(rotation.pitch)
			});
}
