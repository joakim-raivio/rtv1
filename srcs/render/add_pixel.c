/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:04:28 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:12:04 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt_mlx.h"
#include "options.h"

/*
 * Set pixel color at x/y
*/

void	add_pixel(t_image *image, long x, long y, unsigned int color)
{
	char	*dst;

	if (x < 0 || x >= SCREEN_W || y < 0 || y >= SCREEN_H)
		return ;
	dst = image->address
		+ (y * image->line_length + \
			x * (image->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}
