/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_inverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:23:36 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:01:23 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

/*
 * Negate a quaternion.
*/

t_quaternion	quat_inverse(t_quaternion quaternion)
{
	return ((t_quaternion){
		.x = -quaternion.x,
		.y = -quaternion.y,
		.z = -quaternion.z,
		.w = quaternion.w
	});
}
