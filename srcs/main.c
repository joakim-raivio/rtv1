/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:19:42 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 17:12:22 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"
#include "rt_mlx.h"
#include "camera.h"
#include "scene.h"
#include "vector.h"
#include "parse.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	init();
	parse();
//	render();
	printf("Camera:\nLocation - X:%f Y:%f Z:%f\n", get_camera()->location.x,
			get_camera()->location.y, get_camera()->location.z);
	mlx_loop(get_frame()->mlx);
	return (0);
}


/*
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_bzero(get_camera(), sizeof(t_object));
	printf("Camera:\nLocation - X:%f Y:%f Z:%f\n", get_camera()->location.x,
			get_camera()->location.y, get_camera()->location.z);
	get_camera()->location.x = 10.0;
	printf("Camera:\nLocation - X:%f Y:%f Z:%f\n", get_camera()->location.x,
			get_camera()->location.y, get_camera()->location.z);
	ft_bzero(get_scene(), sizeof(t_scene));
	printf("Scene:\n%d\n", get_scene()->lights[0].type);
	return (0);
}
*/

/*
void	print_vector(t_vector vector)
{
	printf("X: %f - Y: %f - Z: %f\n", vector.x, vector.y, vector.z);
}

	print_vector(ft_vec_add((t_vector){.x = 1, .y = 2, .z = 3}, (t_vector){.x = 2, .y = 3, .z = 4}));
	print_vector(ft_vec_substract((t_vector){.x = 2, .y = 1, .z = 1}, (t_vector){.x = 1, .y = 1, .z = 1}));
	print_vector(ft_vec_multiply((t_vector){.x = 1, .y = 1, .z = 1}, 2));
	print_vector(ft_vec_divide((t_vector){.x = 1, .y = 1, .z = 1}, 2));
	print_vector(ft_vec_normalize((t_vector){.x = 35, .y = -211, .z = 151}));
	printf("Dot = %f\n", ft_vec_dot(ft_vec_normalize((t_vector){.x = 1, .y = 2, .z = 3}),
				ft_vec_normalize((t_vector){.x = 35, .y = -211, .z = 151})));
	print_vector(ft_vec_cross((t_vector){.x = 1, .y = 2, .z = 3},
				(t_vector){.x = 2, .y = 3, .z = 4}));
	printf("Length = %f\n", ft_vec_length((t_vector){.x = 1, .y = 2, .z = 3}));
*/
