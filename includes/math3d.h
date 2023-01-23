/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:08:59 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/23 20:42:41 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH3D
# define MATH3D

typedef struct s_vector
{
	double	x;
	double	y;
	double	z;
}	t_vector;

typedef struct s_rotation
{
	double	yaw;
	double	pitch;
	double	roll;
}	t_rotation;

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
t_vector		get_quat_forward(t_quaternion quaternion);
t_vector		get_quat_up(t_quaternion quaternion);
t_vector		get_quat_right(t_quaternion quaternion);
t_vector		vec_add(t_vector first, t_vector second);
t_vector		vec_substract(t_vector first, t_vector second);
t_vector		vec_multiply(t_vector vector, double multiplier);
t_vector		vec_divide(t_vector vector, double divider);
t_vector		vec_normalize(t_vector vector);
double			vec_dot(t_vector first, t_vector second);
t_vector		vec_cross(t_vector first, t_vector second);
t_vector		vec_normalize(t_vector vector);
double			vec_length(t_vector vector);
t_rotation		vec_to_rot(t_vector vector);
t_vector		rot_to_vec(t_rotation rotation);
double			rad_to_deg(double radians);
double			deg_to_rad(double degrees);
t_vector		vec_rotate(t_vector vector, t_quaternion rotation);
double			vec_square(t_vector vector);
double			vec_distance(t_vector first, t_vector second);

#endif
