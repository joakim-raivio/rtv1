/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_light.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:37:05 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/19 18:51:35 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_format.h"
#include "scene.h"
#include "libft.h"
#include "parse.h"
#include "options.h"

void	add_light(char **fields)
{
	static int	light_count = 0;

	if (ft_splitsize(fields) < P_LIGHTSIZE || light_count >= MAX_LIGHTS)
		return ;
	add_object(fields, &(get_scene()->lights[light_count]));
	get_scene()->lights[light_count].intensity = ft_atod(fields[P_INTENSITY]);
	light_count++;
}
