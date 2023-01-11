/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_normal_sphere.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:44:54 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/28 13:48:29 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "math3d.h"
#include "tracing.h"

t_vector	get_normal_sphere(t_shape sphere, t_vector location)
{
	return(vec_normalize(vec_substract(sphere.object.location, location)));
}
