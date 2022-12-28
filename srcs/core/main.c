/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:19:42 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/28 20:38:38 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"
#include "rt_mlx.h"
#include "camera.h"
#include "scene.h"
#include "vector.h"
#include "parse.h"
#include "quaternion.h"
#include "debug.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	init();
	parse();
	render();
	t_rotation test_rot = (t_rotation){
		.yaw = deg_to_rad(0),
		.pitch = deg_to_rad(0),
		.roll = deg_to_rad(0)};
	print_rotation(test_rot);
	print_quaternion(rot_to_quat(test_rot));
	print_quaternion(vec_to_quat(get_camera()->rotation));
	print_quaternion(quat_product(vec_to_quat(get_camera()->rotation), rot_to_quat(test_rot)));
	print_quaternion(quat_product(vec_to_quat(get_camera()->rotation), quat_inverse(rot_to_quat(test_rot))));
	print_quaternion(quat_product(vec_to_quat(get_camera()->rotation), rot_to_quat(test_rot)));
	print_quaternion(quat_rotate(vec_to_quat(get_camera()->rotation), rot_to_quat(test_rot)));
	print_vector(quat_to_vec(quat_rotate(vec_to_quat(get_camera()->rotation), rot_to_quat(test_rot))));
	//print_rotation(vec_to_rot(get_camera()->rotation));
	//print_vector(get_camera()->rotation);
	//print_vector(rot_to_vec(vec_to_rot(get_camera()->rotation)));
	mlx_loop(get_frame()->mlx);
	return (0);
}
