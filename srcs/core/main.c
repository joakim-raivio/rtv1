/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:19:42 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 16:17:42 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"
#include "rt_mlx.h"
#include "camera.h"
#include "scene.h"
#include "parse.h"
#include "math3d.h"

int	main(int argc, char **argv)
{
	init();
	if (argc == 2)
		parse(*(argv + 1));
	render();
	mlx_loop(get_frame()->mlx);
	return (0);
}
