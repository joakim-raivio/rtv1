/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_quat_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:48:47 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 17:49:02 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

t_vector	get_quat_up(t_quaternion quaternion)
{
	return(vec_rotate((t_vector){.x = 0, .y = 1, .z = 0}, quaternion));
}
