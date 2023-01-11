/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_rot_quat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:09:42 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 17:55:07 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

t_vector	vec_rot_quat(t_vector vector, t_rotation rotation)
{
	return(get_quat_forward(
		quat_rot(vec_to_quat(vector), rotation)));
}
