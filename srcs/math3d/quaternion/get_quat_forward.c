/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_quat_forward.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:02:29 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:00:35 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

/*
 * Get the forward unit vector of a given quaternion.
*/

t_vector	get_quat_forward(t_quaternion quaternion)
{
	return (vec_rotate((t_vector){.x = 0, .y = 0, .z = 1}, quaternion));
}
