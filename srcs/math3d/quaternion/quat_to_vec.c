/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_to_vec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:03:14 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:04:45 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

/*
 * Return a normalized unit vector from a given quaternion. Usually better to
 * use the get_quat_forward if you want a direction vector from a quaternion.
*/

t_vector	quat_to_vec(t_quaternion quaternion)
{
	return (vec_normalize((t_vector){
			.x = quaternion.x,
			.y = quaternion.y,
			.z = quaternion.z
		}));
}
