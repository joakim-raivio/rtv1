/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   canvas_to_viewport.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:45:18 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 23:43:35 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "options.h"

t_vector	canvas_to_viewport(int x, int y)
{
	return (vec_normalize((t_vector){
				.x = (double)x * 1 / SCREEN_W - 0.5,
				.z = (double)y * 1 / SCREEN_H - 0.5,
				.y = 1
				}));
}
