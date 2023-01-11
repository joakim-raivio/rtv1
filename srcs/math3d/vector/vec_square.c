/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:55:42 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/22 18:57:27 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

t_vector	vec_square(t_vector vector)
{
	return((t_vector){
			.x = vector.x * vector.x,
			.y = vector.y * vector.y,
			.z = vector.z * vector.z
			});
}
