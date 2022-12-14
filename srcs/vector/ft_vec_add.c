/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:48:43 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 15:15:12 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	ft_vec_add(t_vector first, t_vector second)
{
	return ((t_vector){
		.x = first.x + second.x,
		.y = first.y + second.y,
		.z = first.z + second.y
	});
}
