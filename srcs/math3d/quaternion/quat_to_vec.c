/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_to_vec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:03:14 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/09 16:43:07 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "quaternion.h"
#include "vector.h"

t_vector	quat_to_vec(t_quaternion quaternion)
{
	return(vec_normalize((t_vector){
		.x = 2 * (quaternion.x * quaternion.z - quaternion.w * quaternion.y),
		.y = 2 * (quaternion.y * quaternion.z + quaternion.w * quaternion.x),
		.z = 1 - 2 * (quaternion.x * quaternion.x + quaternion.y * quaternion.y),
	}));
}
