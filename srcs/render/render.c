/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:57:56 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 20:02:49 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"

void	render(void)
{
	screenloop();
	mlx_put_image_to_window(get_frame()->mlx, get_frame()->window, 
			get_image()->image, 0, 0);
}
