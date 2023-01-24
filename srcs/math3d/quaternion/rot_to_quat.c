/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_to_quat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:36:53 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 16:33:56 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"
#include "math.h"

t_quaternion	rot_to_quat(t_rotation rotation)
{
	t_rotation		c;
	t_rotation		s;
	t_quaternion	q;

	c.yaw = cos(rotation.yaw * 0.5);
	s.yaw = sin(rotation.yaw * 0.5);
	c.pitch = cos(rotation.pitch * 0.5);
	s.pitch = sin(rotation.pitch * 0.5);
	c.roll = cos(rotation.roll * 0.5);
	s.roll = sin(rotation.roll * 0.5);
	q.w = c.roll * c.pitch * c.yaw - s.roll * s.pitch * s.yaw;
	q.z = c.yaw * c.pitch * s.roll + s.yaw * s.pitch * c.roll;
	q.y = s.yaw * c.pitch * c.roll + c.yaw * s.pitch * s.roll;
	q.x = c.yaw * s.pitch * c.roll - s.yaw * c.pitch * s.roll;
	return (q);
}
