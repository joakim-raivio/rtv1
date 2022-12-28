/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quaternion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:06:47 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/28 17:13:41 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUATERNION_H
# define QUATERNION_H
# include "vector.h"

typedef struct s_quaternion
{
	double	w;
	double	x;
	double	y;
	double	z;
}	t_quaternion;

t_vector		quat_to_vec(t_quaternion quaternion);
t_quaternion	vec_to_quat(t_vector vector);
t_quaternion	rot_to_quat(t_rotation rotation);
t_quaternion	quat_inverse(t_quaternion quaternion);
t_quaternion	quat_product(t_quaternion first, t_quaternion second);
t_quaternion	quat_rotate(t_quaternion input, t_quaternion rotation);

#endif
