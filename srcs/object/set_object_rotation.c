/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_object_rotation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:57:14 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 17:00:56 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "object.h"

void	set_object_rotation(t_quaternion rotation, void *object)
{
	t_object *obj;

	obj = (t_object *)object;
	obj->rotation = rotation;
	obj->forward = get_quat_forward(rotation);
	obj->up = get_quat_up(rotation);
	obj->right = get_quat_right(rotation);
}
