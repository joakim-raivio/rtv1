/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_to_quat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:40:09 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 17:25:46 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

t_quaternion	vec_to_quat(t_vector vector)
{
	return((t_quaternion){
		.x = vector.x,
		.y = vector.y,
		.z = vector.z,
		.w = 0
	});
}
