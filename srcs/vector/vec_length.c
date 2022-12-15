/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:22:34 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 13:31:32 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <math.h>

double	vec_length(t_vector vector)
{
	return (sqrt(
			pow(vector.x, 2)
			+ pow(vector.y, 2)
			+ pow(vector.z, 2)
		));
}
