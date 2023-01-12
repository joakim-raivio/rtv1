/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_plane_normal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:25:18 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/12 18:16:42 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.h"

t_vector	get_plane_normal(t_shape plane, t_hit hit)
{
	if (vec_dot(get_up_vector(&plane), hit.direction) > 0)
		return(vec_multiply(get_up_vector(&plane), -1));
	return (get_up_vector(&plane));
}
