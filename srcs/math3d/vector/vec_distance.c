/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_distance.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:27:05 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:07:53 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

/*
 * Return the distance between two location vectors.
*/

double	vec_distance(t_vector first, t_vector second)
{
	return (vec_length(vec_substract(first, second)));
}
