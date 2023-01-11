/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_forward_vector.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:51:29 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/11 16:52:35 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "object.h"

t_vector		get_forward_vector(void *object)
{
	return(((t_object *)object)->forward);
}
