/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cone_angle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:47:34 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/23 18:48:44 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include <math.h>

double	get_cone_angle(t_shape cone)
{
	return (atan(cone.object.scale.x / cone.object.scale.y));
}
