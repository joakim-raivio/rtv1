/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_object.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:50:25 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/27 18:35:01 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "object.h"
#include "math3d.h"
#include "parse_format.h"
#include "libft.h"
#include "parse.h"

void	add_object(char **fields, void *object)
{
	if (ft_splitsize(fields) < P_OBJECTSIZE)
		return ;
	((t_object *)object)->type = str_to_type(fields[P_TYPE]);
	set_object_location((t_vector){
		.x = ft_atod(fields[P_LOCX]),
		.y = ft_atod(fields[P_LOCY]),
		.z = ft_atod(fields[P_LOCZ])},
		object);
	set_object_rotation(rot_to_quat((t_rotation)
		{.yaw = deg_to_rad(ft_atod(fields[P_ROTYAW])),
			.pitch = deg_to_rad(ft_atod(fields[P_ROTPITCH])),
			.roll = deg_to_rad(ft_atod(fields[P_ROTROLL]))}),
		object);
}
