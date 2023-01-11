/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_quat_right.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:49:18 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 17:49:31 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "math3d.h"

t_vector	get_quat_right(t_quaternion quaternion)
{
	return(vec_rotate((t_vector){.x = 1, .y = 0, .z = 0}, quaternion));
}
