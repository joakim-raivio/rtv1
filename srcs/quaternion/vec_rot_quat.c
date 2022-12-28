/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_rot_quat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:09:42 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/28 15:39:34 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "quaternion.h"

t_vector	vec_rot_quat(t_vector vector, t_rotation rotation)
{
	return(quat_to_vec(
		quat_rot(vec_to_quat(vector), rotation)));
}
