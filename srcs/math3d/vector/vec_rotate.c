/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:52:25 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/27 18:35:39 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

t_vector	vec_rotate(t_vector v, t_quaternion q)
{
	t_quaternion	i;

	i.x = q.w * v.x + q.y * v.z - q.z * v.y;
	i.y = q.w * v.y + q.z * v.x - q.x * v.z;
	i.z = q.w * v.z + q.x * v.y - q.y * v.x;
	i.w = -q.x * v.x - q.y * v.y - q.z * v.z;
	v.x = i.x * q.w + i.w * -q.x + i.y * -q.z - i.z * -q.y;
	v.y = i.y * q.w + i.w * -q.y + i.z * -q.x - i.x * -q.z;
	v.z = i.z * q.w + i.w * -q.z + i.x * -q.y - i.y * -q.x;
	return (v);
}
