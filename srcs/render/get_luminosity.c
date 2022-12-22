/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_luminosity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 01:10:17 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/23 01:28:50 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "light.h"
#include "vector.h"
#include "scene.h"
#include "options.h"
#include "libft.h"

double	get_luminosity(t_hit hit)
{
	return (ft_dblmax(BACKGROUND_ILLUMINATION , get_scene()->lights[0].intensity
		* vec_dot(hit.normal, vec_normalize(
		vec_substract(get_scene()->lights[0].object.location, hit.location)))));
}
