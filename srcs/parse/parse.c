/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:59:11 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 08:10:01 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "object.h"
#include "libft.h"
#include "parse_format.h"
#include <fcntl.h>

/*
 * For each line read the first csv field for type and pass it to an applicable
 * parsing function.
*/

void	parse_line(char *line)
{
	char			**fields;
	t_object_type	type;

	fields = ft_strsplit(line, ',');
	if (!fields)
		return ;
	type = str_to_type(fields[P_TYPE]);
	if (type == camera)
		add_camera(fields);
	else if (type == light)
		add_light(fields);
	else if (type > light)
		add_shape(fields);
	ft_freearray(&fields, ft_countwords(line, ','));
}

/*
 * Run through the file and pass each line to parse_line()
*/

void	parse(char *file)
{
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY);
	if (!fd || fd < 0)
		ft_panic("Error opening file");
	while (get_next_line(fd, &line))
	{
		parse_line(line);
		free(line);
	}
	free(line);
	close(fd);
}
