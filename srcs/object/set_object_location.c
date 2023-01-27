/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_object_location.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:57:14 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/27 18:34:23 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "object.h"

void	set_object_location(t_vector location, void *object)
{
	((t_object *)object)->location = location;
}
