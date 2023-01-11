/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_location.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:50:11 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 16:51:07 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "object.h"

t_vector		get_location(void *object)
{
	return (((t_object *)object)->location);
}
