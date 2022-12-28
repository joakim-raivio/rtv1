/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_to_quat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:40:09 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/28 20:27:08 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "quaternion.h"

t_quaternion	vec_to_quat(t_vector vector)
{
	return((t_quaternion){
		.x = vector.x,
		.y = vector.y,
		.z = vector.z,
		.w = 0
	});
}
