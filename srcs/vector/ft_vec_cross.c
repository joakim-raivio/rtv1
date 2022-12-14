/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_cross.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:36:00 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 15:15:31 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	ft_vec_cross(t_vector first, t_vector second)
{
	return ((t_vector){
		.x = first.y * second.z - first.z * second.y,
		.y = first.z * second.x - first.x * second.z,
		.z = first.x * second.y - first.y * second.x
	});
}
