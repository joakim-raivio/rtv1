/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_dot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:30:18 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 15:24:49 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

double	ft_vec_dot(t_vector first, t_vector second)
{
	return (first.x * second.x
		+ first.y * second.y
		+ first.z * second.z
	);
}
