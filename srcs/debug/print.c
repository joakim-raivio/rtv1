/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:35:16 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/28 20:36:07 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "quaternion.h"
#include <stdio.h>

void	print_vector(t_vector vector)
{
	printf("X: %f - Y: %f - Z: %f\n", vector.x, vector.y, vector.z);
}

void	print_rotation(t_rotation rotation)
{
	printf("Radians:\n\t Yaw: %f - Pitch: %f - Roll: %f\n",
		   	rotation.yaw, rotation.pitch, rotation.roll);
	printf("Degrees:\n\t Yaw: %f - Pitch: %f - Roll: %f\n",
			rad_to_deg(rotation.yaw),
			rad_to_deg(rotation.pitch),
			rad_to_deg(rotation.roll));
}

void	print_quaternion(t_quaternion quaternion)
{
	printf("W: %f - X: %f - Y: %f Z: %f\n", quaternion.w, quaternion.x,
	quaternion.y, quaternion.z);
}
