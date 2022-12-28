/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_to_quat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:36:53 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/28 20:50:26 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "quaternion.h"
#include "math.h"
#include "debug.h"

t_quaternion	rot_to_quat(t_rotation rotation)
{
    double cr = cos(rotation.roll * 0.5);
    double sr = sin(rotation.roll * 0.5);
    double cp = cos(rotation.pitch * 0.5);
    double sp = sin(rotation.pitch * 0.5);
    double cy = cos(rotation.yaw * 0.5);
    double sy = sin(rotation.yaw * 0.5);
    t_quaternion q;

    q.w = cr * cp * cy + sr * sp * sy;
    q.y = sr * cp * cy - cr * sp * sy;
    q.x = cr * sp * cy + sr * cp * sy;
    q.z = cr * cp * sy - sr * sp * cy;

    return q;
}
