/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_divide.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:48:43 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 18:35:54 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"
#include "libft.h"

t_vector	vec_divide(t_vector vector, double divider)
{
	if (divider == 0)
		ft_panic("Dividing by zero at vec_divide");
	return ((t_vector){
		.x = vector.x / divider,
		.y = vector.y / divider,
		.z = vector.z / divider
	});
}
