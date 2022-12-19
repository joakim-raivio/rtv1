/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:52:25 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/19 17:27:46 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <math.h>

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

t_vector	vec_rotate(t_vector vector, t_rotation rotation)
{
	t_vector	local;

	local = vector_world_to_local(vector);
	rotate_yaw(&local, rotation.yaw);
	rotate_pitch(&local, rotation.pitch);
	rotate_roll(&local, rotation.roll);
	return (vec_local_to_world());
}

t_vector	vec_rotate_world(t_vector vector, t_rotation rotation)
{
	
}


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
