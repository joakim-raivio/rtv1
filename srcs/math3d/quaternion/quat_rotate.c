/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:54:34 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 19:20:49 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"
#include "math.h"

t_quaternion	quat_rotate(t_quaternion input, t_quaternion rotation)
{
	return (quat_product(quat_product(rotation, input), quat_inverse(rotation)));
}
