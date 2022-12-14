/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_divide.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:48:43 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 15:25:17 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	ft_vec_divide(t_vector vector, double divider)
{
	return ((t_vector){
		.x = vector.x / divider,
		.y = vector.y / divider,
		.z = vector.z / divider
	});
}
