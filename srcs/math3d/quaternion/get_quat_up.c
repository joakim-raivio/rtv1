/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_quat_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:48:47 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:01:03 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

/*
 * Get the upward unit vector of a given quaternion.
*/

t_vector	get_quat_up(t_quaternion quaternion)
{
	return (vec_rotate((t_vector){.x = 0, .y = 1, .z = 0}, quaternion));
}
