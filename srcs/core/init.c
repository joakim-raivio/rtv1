/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:46:04 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 19:52:20 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt_mlx.h"
#include "rt.h"
#include "camera.h"
#include "scene.h"
#include "interface.h"

void	init_getters(void)
{
	ft_bzero(get_frame(), sizeof(t_frame));
	ft_bzero(get_camera(), sizeof(t_object));
	ft_bzero(get_scene(), sizeof(t_scene));
}

void	init_mlx(void)
{
	t_image	*image;
	get_frame()->mlx = mlx_init();
	if (!(get_frame()->mlx))
		ft_panic("MLX initilization failed.");
	get_frame()->window = mlx_new_window(get_frame()->mlx,
		SCREEN_W, SCREEN_H, WINDOW_NAME);
	if (!(get_frame()->window))
		ft_panic("MLX window initialization failed.");
	image = get_image();
	image->image = mlx_new_image(get_frame()->mlx, SCREEN_W, SCREEN_H);
	image->address = mlx_get_data_addr(image->image, &(image->bits_per_pixel),
			&(image->line_length), &(image->endian));
}

void	init(void)
{
	init_getters();
	init_mlx();
	init_interface();
}
