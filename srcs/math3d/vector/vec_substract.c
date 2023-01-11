/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_substract.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:59:54 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 13:33:11 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

t_vector	vec_substract(t_vector first, t_vector second)
{
	return ((t_vector){
		.x = first.x - second.x,
		.y = first.y - second.y,
		.z = first.z - second.z
	});
}
