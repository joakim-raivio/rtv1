/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_product.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:25:35 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/28 20:51:37 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "quaternion.h"
#include "debug.h"

t_quaternion	quat_product(t_quaternion r, t_quaternion s)
{
	print_quaternion(r);
	print_quaternion(s);

	return ((t_quaternion){
		.w = r.w * s.w - r.y * s.y - r.x * s.x - r.z * s.z,
		.y = r.w * s.y + r.y * s.w - r.x * s.z + r.z * s.x,
		.x = r.w * s.x + r.y * s.z + r.x * s.w - r.z * s.y,
		.z = r.w * s.z - r.y * s.x + r.x * s.y + r.z * s.w
	});
}

/*
Source:
https://danceswithcode.net/engineeringnotes/quaternions/quaternions.html
t0 = (r0s0 − r1s1 − r2s2 − r3s3)
t1 = (r0s1 + r1s0 − r2s3 + r3s2)
t2 = (r0s2 + r1s3 + r2s0 − r3s1)
t3 = (r0s3 − r1s2 + r2s1 + r3s0)
*/
