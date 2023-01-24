/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sphere_normal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:44:54 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 17:04:42 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"
#include "math3d.h"
#include "tracing.h"

t_vector	get_sphere_normal(t_shape sphere, t_vector location)
{
	return (vec_normalize(vec_substract(location, sphere.object.location)));
}
