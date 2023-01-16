/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cylinder_normal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:56:34 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/16 14:15:30 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"

t_vector	get_cylinder_normal(t_shape cylinder, t_vector location)
{
	return(vec_substract(location,
		vec_add(cylinder.object.location,
		vec_multiply(cylinder.object.up,
		vec_dot(vec_substract(location, cylinder.object.location),
		cylinder.object.up)))));
}

//           (P2-P1)dot(v)
//&Pr = P1 +  -------------
