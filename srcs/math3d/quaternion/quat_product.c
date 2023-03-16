/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_product.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:25:35 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:02:34 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

/*
 * Multiply two quaternions.
*/

t_quaternion	quat_product(t_quaternion r, t_quaternion s)
{
	return ((t_quaternion){
		.w = r.w * s.w - r.y * s.y - r.x * s.x - r.z * s.z,
		.y = r.w * s.y + r.y * s.w - r.x * s.z + r.z * s.x,
		.x = r.w * s.x + r.y * s.z + r.x * s.w - r.z * s.y,
		.z = r.w * s.z - r.y * s.x + r.x * s.y + r.z * s.w
	});
}
