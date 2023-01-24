/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:55:42 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 16:40:30 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

double	vec_square(t_vector vector)
{
	return (vector.x * vector.x
		+ vector.y * vector.y
		+ vector.z * vector.z
	);
}
