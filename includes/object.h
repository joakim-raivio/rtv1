/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:07:44 by jraivio           #+#    #+#             */
/*   Updated: 2022/11/23 15:04:35 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT_H
# define OBJECT_H
#include "vector.h"

typedef struct	s_transform
{
	t_vector	location;
	t_vector	rotation;
	t_vector	scale;
}	t_transform;

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
	t_vector		rotation;
	t_vector		scale;
	t_object_type	type;
}	t_object;

t_object	get_empty_object(void);

#endif
