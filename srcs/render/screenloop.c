/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screenloop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:53:01 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 19:57:14 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"

void	screenloop(void)
{
	int		x;
	int		y;
	t_image	*image;

	x = 0;
	y = 0;
	image = get_image();
	while (y < SCREEN_H)
	{
		while (x < SCREEN_W)
		{
			add_pixel(image, x, y, 0x000000FF);
			x++;
		}
		x = 0;
		y++;
	}
}
