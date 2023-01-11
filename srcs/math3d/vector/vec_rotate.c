/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:52:25 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 18:46:35 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"
#include <math.h>
#include <stdio.h>

/*
t_vector	rotate_yaw(t_vector *vector, double angle)
{
	transform local then this and back to world.
	roll->yaw->pitch
	return ((t_vector){
			.x = 
			.y = 
			.z = z,
			});
}
*/

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
/*
t_vector	vec_rotate(t_vector vector, t_rotation rotation)
{
	t_rotation	vector_rotation;

	vector_rotation = vec_to_rot(vector);
	vector_rotation.yaw += rotation.yaw;
	vector_rotation.pitch += rotation.pitch;

	if (rotation.pitch == 0)
	{
		printf("Input yaw: %f -> Result yaw: %f\n", rad_to_deg(rotation.yaw), rad_to_deg(vector_rotation.yaw));
		printf("Input pitch: %f -> Result pitch: %f\n", rad_to_deg(rotation.pitch), rad_to_deg(vector_rotation.pitch));
		printf("Input vector - X: %f Y: %f Z: %f\n", vector.x, vector.y, vector.z);
		printf("Resulting vector - X: %f Y: %f Z: %f\n", rot_to_vec(vector_rotation).x, rot_to_vec(vector_rotation).y, rot_to_vec(vector_rotation).z);
	}

	return (rot_to_vec(vector_rotation));
}
*/

/*
 *  
	|cos θ   −sin θ   0| |x|   |x cos θ − y sin θ|   |x'|
    |sin θ    cos θ   0| |y| = |x sin θ + y cos θ| = |y'|
    |  0       0      1| |z|   |        z        |   |z'|
  
	| cos θ    0   sin θ| |x|   | x cos θ + z sin θ|   |x'|
    |   0      1       0| |y| = |         y        | = |y'|
    |−sin θ    0   cos θ| |z|   |−x sin θ + z cos θ|   |z'|
  
	|1     0           0| |x|   |        x        |   |x'|
    |0   cos θ    −sin θ| |y| = |y cos θ − z sin θ| = |y'|
    |0   sin θ     cos θ| |z|   |y sin θ + z cos θ|   |z'|
 *
 */
