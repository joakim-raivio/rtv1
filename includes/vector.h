/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:05:39 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 15:20:53 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

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

t_vector	vec_add(t_vector first, t_vector second);
t_vector	vec_substract(t_vector first, t_vector second);
t_vector	vec_multiply(t_vector vector, double multiplier);
t_vector	vec_divide(t_vector vector, double divider);
t_vector	vec_normalize(t_vector vector);
double		vec_dot(t_vector first, t_vector second);
t_vector	vec_cross(t_vector first, t_vector second);
t_vector	vec_normalize(t_vector vector);
double		vec_length(t_vector vector);
t_rotation	vec_to_rot(t_vector vector);
t_vector	rot_to_vec(t_rotation rotation);
double		rad_to_deg(double radians);
double		deg_to_rad(double degrees);

#endif
