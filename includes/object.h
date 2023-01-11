/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:07:44 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 17:11:34 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT_H
# define OBJECT_H
# include "math3d.h"

typedef enum e_object_type
{
	null,
	camera,
	light,
	plane,
	sphere,
	cylinder,
	cone
}	t_object_type;

typedef struct	s_object
{
	t_vector		location;
	t_quaternion	rotation;
	t_vector		forward;
	t_vector		up;
	t_vector		right;
	t_vector		scale;
	t_object_type	type;
}	t_object;

t_object		get_empty_object(void);
void			set_object_rotation(t_quaternion rotation, void *object);
t_quaternion	get_rotation(void *object);
t_vector		get_location(void *object);
t_vector		get_forward_vector(void *object);
t_vector		get_up_vector(void *object);
t_vector		get_right_vector(void *object);
t_vector		get_scale(void *object);
t_object_type	get_type(void *object);

#endif
