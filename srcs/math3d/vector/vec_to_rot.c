/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_to_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:34:22 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 16:40:52 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"
#include <math.h>

t_rotation	vec_to_rot(t_vector vector)
{
	return ((t_rotation){
		.yaw = atan2(vector.x, vector.y),
		.pitch = asin(vector.z),
		.roll = 0
	});
}
