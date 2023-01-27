/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:54:34 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/27 18:36:51 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

t_quaternion	quat_rotate(t_quaternion input, t_quaternion rotation)
{
	return (quat_product(
			quat_product(rotation, input),
			quat_inverse(rotation)));
}
