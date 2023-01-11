/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_to_quat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:36:53 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 17:53:39 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"
#include "math.h"

t_quaternion	rot_to_quat(t_rotation rotation)
{
    double cy = cos(rotation.yaw * 0.5);
    double sy = sin(rotation.yaw * 0.5);
    double cp = cos(rotation.pitch * 0.5);
    double sp = sin(rotation.pitch * 0.5);
    double cr = cos(rotation.roll * 0.5);
    double sr = sin(rotation.roll * 0.5);
    t_quaternion q;

    q.w = cr * cp * cy + sr * sp * sy;
    q.x = cy * cp * sr - sy * sp * cr;
    q.y = cr * sp * cy + sr * cp * sy;
    q.z = sy * cp * cr - cy * sp * sr;

    return q;
}
