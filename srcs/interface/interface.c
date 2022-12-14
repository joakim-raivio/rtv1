/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:27:12 by jraivio           #+#    #+#             */
/*   Updated: 2022/11/10 16:01:46 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "input_mappings.h"

int	key_pressed(int key_code, t_frame *frame)
{
	if (key_code == KEY_ESC)
		exit(0);
	else if (key_code == KEY_W || key_code == KEY_UP)
		frame->key_state.move_up = 1;
	else if (key_code == KEY_A || key_code == KEY_LEFT)
		frame->key_state.move_left = 1;
	else if (key_code == KEY_S || key_code == KEY_DOWN)
		frame->key_state.move_down = 1;
	else if (key_code == KEY_D || key_code == KEY_RIGHT)
		frame->key_state.move_right = 1;
	return (0);
}

int	key_released(int key_code, t_frame *frame)
{
	if (key_code == KEY_W || key_code == KEY_UP)
		frame->key_state.move_up = 0;
	else if (key_code == KEY_A || key_code == KEY_LEFT)
		frame->key_state.move_left = 0;
	else if (key_code == KEY_S || key_code == KEY_DOWN)
		frame->key_state.move_down = 0;
	else if (key_code == KEY_D || key_code == KEY_RIGHT)
		frame->key_state.move_right = 0;
	return (0);
}

int	mouse_pressed(int mouse_code, int x, int y, t_frame *frame)
{
	if (mouse_code == MOUSE_SCROLL_DOWN)
	{
		frame->offset.zoom /= ZOOM_RATE;
		frame->offset.x += \
		frame->offset.zoom * ((long double)x / SCREEN_W);
		frame->offset.y += \
		frame->offset.zoom * ((long double)y / SCREEN_H);
	}
	else if (mouse_code == MOUSE_SCROLL_UP)
	{
		frame->offset.zoom *= ZOOM_RATE;
		frame->offset.x -= \
		frame->offset.zoom * ((long double)x / SCREEN_W) / 2;
		frame->offset.y -= \
		frame->offset.zoom * ((long double)y / SCREEN_H) / 2;
	}
	return (0);
}

int	set_mouse_coords(int x, int y, t_frame *frame)
{
	frame->mouse_state.x = x;
	frame->mouse_state.y = y;
	return (0);
}

void	init_interface(t_frame *frame)
{
	mlx_hook(frame->window, ON_KEY_DOWN, 0, key_pressed, frame);
	mlx_hook(frame->window, ON_KEY_UP, 0, key_released, frame);
	mlx_hook(frame->window, ON_MOUSE_DOWN, 0, mouse_pressed, frame);
	if (frame->fractal == julia)
		mlx_hook(frame->window, ON_MOUSE_MOVE, 0x40, set_mouse_coords, frame);
}
