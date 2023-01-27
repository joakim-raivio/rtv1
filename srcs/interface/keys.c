/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:39:44 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/27 18:43:32 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interface.h"
#include <stdlib.h>

int	key_pressed(int key_code)
{
	if (key_code == KEY_ESC)
		exit(0);
	return (0);
}

int	key_released(int key_code)
{
	if (key_code == KEY_ESC)
		exit(0);
	return (0);
}
