/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:22:34 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 15:16:57 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <math.h>

double	ft_vec_length(t_vector vector)
{
	return (sqrt(
			pow(vector.x, 2)
			+ pow(vector.y, 2)
			+ pow(vector.z, 2)));
}
