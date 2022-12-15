/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_to_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:34:22 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 14:19:55 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <math.h>

t_rotation	vec_to_rot(t_vector vector)
{
	return ((t_rotation){
			.yaw = atan2(vector.x, vector.y),
			.pitch = asin(vector.z), 
			.roll = 0
			});
}
